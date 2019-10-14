#include "trafficLogic.h"

/*------ Variables Initialization ------*/
unsigned long onTime = 5000;   // ON   Time of 5000 ms (5 seconds)
unsigned long waitTime = 2000; // Wait Time of 2000 ms (2 seconds)
unsigned long holdTime = 1000; // hold Time of 1000 ms (1 second)
unsigned long previousTime, currentTime;
bool isHold = false;
int sequenceCounter = 0, interruptLimit = 0, tempCounter = 0;
bool interruptON = false;

/*------ Define Functions ------*/
void doTrafficLightLogic(int interruptSequence)
{
    if (interruptSequence != 0)
    {
        if(!interruptON)
        {
            tempCounter = sequenceCounter;
            sequenceCounter = interruptSequence;
            interruptLimit = interruptSequence + 2;
            interruptON = true;
        } 
    }

    currentTime = millis();
    if (isHold)
    {
        if (currentTime - previousTime >= holdTime)
        {
            
            if(sequenceCounter == 8)
            {
                sequenceCounter = 1;
            }
            else
            {
                sequenceCounter++;
            }

            if(sequenceCounter == 1){
                sequence1();
            }
            else if(sequenceCounter == 3){
                sequence3();
            }
            else if(sequenceCounter == 5){
                sequence5();
            }
            else if(sequenceCounter == 7){
                sequence7();
            }
            previousTime = currentTime;
            isHold = false;
        }
    }
    else if (sequenceCounter == 1)
    {
        if (currentTime - previousTime >= onTime)
        {
            sequence2();
            sequenceCounter++;
            previousTime = currentTime;
        }
    }
    else if (sequenceCounter == 2)
    {
        if (currentTime - previousTime >= waitTime)
        {
            allRed();
            previousTime = currentTime;
            isHold = true;
        }
    }
    else if (sequenceCounter == 3)
    {
        if (currentTime - previousTime >= onTime)
        {
            sequence4();
            sequenceCounter++;
            previousTime = currentTime;
        }
    }
    else if (sequenceCounter == 4)
    {
        if (currentTime - previousTime >= waitTime)
        {
            allRed();
            previousTime = currentTime;
            isHold = true;
        }
    }
    else if (sequenceCounter == 5)
    {
        if (currentTime - previousTime >= onTime)
        {
            sequence6();
            sequenceCounter++;
            previousTime = currentTime;
        }
    }
    else if (sequenceCounter == 6)
    {
        if (currentTime - previousTime >= waitTime)
        {
            allRed();
            previousTime = currentTime;
            isHold = true;
        }
    }
    else if (sequenceCounter == 7)
    {
        if (currentTime - previousTime >= onTime)
        {
            sequence8();
            sequenceCounter++;
            previousTime = currentTime;
        }
    }
    else if (sequenceCounter == 8)
    {
        if (currentTime - previousTime >= waitTime)
        {
            allRed();
            previousTime = currentTime;
            isHold = true;
        }
    }
}
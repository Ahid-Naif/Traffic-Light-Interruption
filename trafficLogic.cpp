#include "trafficLogic.h"

/*------ Variables Initialization ------*/
unsigned long onTime = 5000;   // ON   Time of 5000 ms (5 seconds)
unsigned long waitTime = 2000; // Wait Time of 2000 ms (2 seconds)
unsigned long previousTime, currentTime;
int sequenceCounter = 0, interruptLimit = 0, tempCounter = 0;

/*------ Define Functions ------*/
void doTrafficLightLogic(int interruptSequence)
{
    if (interruptSequence != 0)
    {
        tempCounter = sequenceCounter;
        sequenceCounter = interruptSequence;
        interruptLimit = interruptSequence + 2;
    }

    currentTime = millis();
    if (sequenceCounter == 1)
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
            sequence3();
            sequenceCounter++;
            previousTime = currentTime;
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
            sequence5();
            sequenceCounter++;
            previousTime = currentTime;
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
            sequence7();
            sequenceCounter++;
            previousTime = currentTime;
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
            sequence1();
            sequenceCounter = 1;
            previousTime = currentTime;
        }
    }
}
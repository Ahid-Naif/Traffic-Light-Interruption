#include "trafficLogic.h"

/*------ Variables Initialization ------*/
unsigned long onTime = 5000;   // ON   Time of 5000 ms (5 seconds)
unsigned long waitTime = 2000; // Wait Time of 2000 ms (2 seconds)
unsigned long holdTime = 1000; // hold Time of 1000 ms (1 second)
unsigned long previousTime, currentTime;
bool isHold = false;
int sequenceCounter = 0, tempCounter = 0;
bool interruptON = false, startInterrupt = false, endInterrupt = false, goBack = false;

/*------ Define Functions ------*/
void doTrafficLightLogic(int interruptSequence)
{
    if (interruptSequence != 0)
    {
        if(!interruptON)
        {
            Serial.print("counter: ");
            Serial.println(sequenceCounter);

            // save at what position the traffic light was
            if(isHold)
            {
                // if traffic light was red, save the next position instead
                tempCounter = sequenceCounter + 1;
            }
            else
            {
                tempCounter = sequenceCounter;
            }
            // go to YELLOW only if it's not already in YELLOW
            if(sequenceCounter%2 != 0)
            {
                sequenceCounter++;
            }
            
            interruptON = true;
            startInterrupt = true;
            // turn current green traffic light into YELLOW if it's not red
            if(!isHold)
            {
                go2Sequence(sequenceCounter);
            }
        } 
    }

    currentTime = millis();
    if (isHold)
    {
        if (currentTime - previousTime >= holdTime)
        {
            if(startInterrupt)
            {
                sequenceCounter = interruptSequence;
                startInterrupt = false;
                endInterrupt = true;
            }
            else if(endInterrupt)
            {
                sequenceCounter = tempCounter;
                endInterrupt = false;
                goBack = true;
            }
            else
            {
                if(sequenceCounter == 8)
                {
                    sequenceCounter = 1;
                }
                else
                {
                    sequenceCounter++;
                }
            }

            go2Sequence(sequenceCounter);
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

    // check received signals
    if (Serial.available())
    {
        command = Serial.read();
            
        addCommand(command);
        Serial.println("command added!");
        Serial.println("--------------------------");
    }
}
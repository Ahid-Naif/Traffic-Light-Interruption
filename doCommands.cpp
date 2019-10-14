#include "doCommands.h"

/*------ Variables Initialization ------*/
char command = '0'; // to store commands
char commands[] = {'0', '0', '0', '0'};
bool commandExist = false;
char toDo = 0;

/*------ Define Functions ------*/
void addCommand(char command)
{
    for (int i = 0; i <= 3; i++)
    {
        if (commands[i] == '0')
        {
            commands[i] = command;
            break;
        }
        else
        {
            if (commands[i] == command)
            {
                break;
            }
        }
    }
}

bool checkCommands()
{
    if (commands[0] == '0')
    {
        return false;
    }
    else
    {
        return true;
    }
}

void commandsPop()
{
    for (int i = 0; i <= 3; i++)
    {
        if (i == 3)
        {
            commands[i] = '0';
        }
        else
        {
            commands[i] = commands[i + 1];
        }
    }
}

void startCommands()
{
    toDo = commands[0];
    commandsPop();

    if (toDo == '1')
    {
        previousTime = millis();
        for (;;)
        {
            doTrafficLightLogic(8);
            if (sequenceCounter == interruptLimit)
            {
                sequenceCounter = tempCounter;
                break;
            }
        }
    }
}
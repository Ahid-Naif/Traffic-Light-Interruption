#include "doCommands.h"

/*------ Variables Initialization ------*/
char command = '0'; // to store commands
char commands[] = {'0', '0', '0', '0'};
bool commandExist = false;
char toDo = 0;

/*------ Define Functions ------*/
void addCommand(char command)
{
    Serial.println("add function: ");
    Serial.print("before..");
    for (int i = 0; i <= 3; i++)
    {
        if( (command != '1') && (command != '2') && (command != '3') && (command != '4'))
        {
            break;
        }
        Serial.print("i = ");
        Serial.println(i);
        printCommands();
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
    Serial.println();
    Serial.println("after..");
    printCommands();
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
    Serial.print("to do: ");
    Serial.println(toDo);

    previousTime = millis();
    Serial.print("-----START-----");
    for (;;)
    {
        if(toDo == '1')
        {
            doTrafficLightLogic(1);
        }
        else if(toDo == '2')
        {
            doTrafficLightLogic(3);
        }
        else if(toDo == '3')
        {
            doTrafficLightLogic(5);
        }
        else if (toDo == '4')
        {
            doTrafficLightLogic(7);
        }
        
        if (goBack)
        {
            tempCounter = 0;
            interruptON = false;
            startInterrupt = false;
            endInterrupt = false;
            goBack = false;

            commandsPop();
            break;
        }
    }
    commandExist = checkCommands();
    if (commandExist)
    {
        Serial.println("There are commands!!!!!!");
        startCommands();
    }
    Serial.println("--------END--------");
}

void printCommands(){
    Serial.print("print function: ");
    for (int i = 0; i <= 3; i++)
    {
        Serial.print(commands[i]);
    }
    Serial.println();
}
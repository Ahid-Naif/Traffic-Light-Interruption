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
        if( (command != '1') && (command != '2') && (command != '3') && (command != '4'))
        {
            // إذا الامر ليس 1 او 2 او 3 او 4
            break; // تجاهل
        }
        if (commands[i] == '0')
        {
            // إضافة الأمر
            commands[i] = command;
            break;
        }
        else
        {
            if (commands[i] == command)
            {
                // إذا كان الامر مكرر
                break; // تجاهل
            }
        }
        
    }
}

bool checkCommands()
{
    if (commands[0] == '0')
    {
        // إذا قيمة الأوامر صغر
        return false; // رسالة خطأ
    }
    else
    {
        return true; // رسالة صح
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
    toDo = commands[0]; // تخزين قيمة الامر الاول

    previousTime = millis();
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

            commandsPop(); // حذف الامر بعد التنفيذ
            break; // تجاهل الاوامر من الريموت
        }
    }
    commandExist = checkCommands();
    if (commandExist)
    {
        startCommands();
    }
}
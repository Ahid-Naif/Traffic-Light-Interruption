#ifndef docommands_h
#define docommands_h

#include "trafficLogic.h"

/*------ Variables Declaration ------*/
extern char command; // to store commands
extern char toDo; // to store commands to do
extern char commands[4];
extern bool commandExist;

/*------ Functions Declaration ------*/
extern void addCommand(char);
extern bool checkCommands();
extern void commandsPop();
extern void startCommands();

#endif
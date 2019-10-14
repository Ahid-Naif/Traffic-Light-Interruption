#ifndef trafficlogic_h
#define trafficlogic_h

#include "sequences.h"

/*------ Variables Declaration ------*/
extern unsigned long onTime;
extern unsigned long waitTime;
extern unsigned long previousTime, currentTime;

extern int sequenceCounter;
extern int tempCounter;
extern int interruptLimit;

/*------ Functions Declaration ------*/
extern void doTrafficLightLogic(int); 

#endif
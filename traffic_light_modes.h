#ifndef traffic_light_modes_h
#define traffic_light_modes_h

#include <Arduino.h>
#include "initializations.h"

// define traffic light 1 modes
extern void traffic1_go();
extern void traffic1_wait();
extern void traffic1_stop();

// define traffic light 2 modes
extern void traffic2_go();
extern void traffic2_wait();
extern void traffic2_stop();

// define traffic light 3 modes
extern void traffic3_go();
extern void traffic3_wait();
extern void traffic3_stop();

// define traffic light 4 modes
extern void traffic4_go();
extern void traffic4_wait();
extern void traffic4_stop();

#endif
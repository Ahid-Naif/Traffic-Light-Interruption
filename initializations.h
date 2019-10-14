#ifndef initializations_h
#define initializations_h

#include <arduino.h>

/*------ Variables Declaration ------*/
// variables for traffic light number 1
extern unsigned char green1;
extern unsigned char orange1;
extern unsigned char red1;

// variables for traffic light number 2
extern unsigned char green2;
extern unsigned char orange2;
extern unsigned char red2;

// variables for traffic light number 3
extern unsigned char green3;
extern unsigned char orange3;
extern unsigned char red3;

// variables for traffic light number 4
extern unsigned char green4;
extern unsigned char orange4;
extern unsigned char red4;

/*------ Functions Declaration ------*/
extern void defineTrafficLight1();
extern void defineTrafficLight2();
extern void defineTrafficLight3();
extern void defineTrafficLight4();

extern void defineReceiver();

#endif
#include "initializations.h"

/*------ Variables Initialization ------*/
// variables for traffic light number 1
unsigned char green1  = 1;
unsigned char orange1 = 2;
unsigned char red1    = 3;

// variables for traffic light number 2
unsigned char green2  = 4;
unsigned char orange2 = 5;
unsigned char red2    = 6;

// variables for traffic light number 3
unsigned char green3  = 7;
unsigned char orange3 = 8;
unsigned char red3    = 9;

// variables for traffic light number 4
unsigned char green4  = 10;
unsigned char orange4 = 11;
unsigned char red4    = 12;

/*------ Define Functions ------*/
void defineTrafficLight1(){
    pinMode(green1,  OUTPUT);
    pinMode(orange1, OUTPUT);
    pinMode(red1,    OUTPUT);
}

void defineTrafficLight2(){
    pinMode(green2,  OUTPUT);
    pinMode(orange2, OUTPUT);
    pinMode(red2,    OUTPUT);
}

void defineTrafficLight3(){
    pinMode(green3,  OUTPUT);
    pinMode(orange3, OUTPUT);
    pinMode(red3,    OUTPUT);
}

void defineTrafficLight4(){
    pinMode(green4,  OUTPUT);
    pinMode(orange4, OUTPUT);
    pinMode(red4,    OUTPUT);
}

void defineReceiver(){
    pinMode(irReciver, INPUT);
}
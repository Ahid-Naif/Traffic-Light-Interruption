#include "initializations.h"
#include <arduino.h>

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
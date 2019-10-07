#include "traffic_light_modes.h"

// define traffic light 1 modes
void traffic1_go(){
    digitalWrite(green1,  HIGH);
    digitalWrite(orange1, LOW);
    digitalWrite(red1,    LOW);
}

void traffic1_wait(){
    digitalWrite(green1,  HIGH);
    digitalWrite(orange1, HIGH);
    digitalWrite(red1,    LOW);
}

void traffic1_stop(){
    digitalWrite(green1,  LOW);
    digitalWrite(orange1, LOW);
    digitalWrite(red1,    HIGH);
}

// define traffic light 2 modes
void traffic2_go(){
    digitalWrite(green2,  HIGH);
    digitalWrite(orange2, LOW);
    digitalWrite(red2,    LOW);
}

void traffic2_wait(){
    digitalWrite(green2,  HIGH);
    digitalWrite(orange2, HIGH);
    digitalWrite(red2,    LOW);
}

void traffic2_stop(){
    digitalWrite(green2,  LOW);
    digitalWrite(orange2, LOW);
    digitalWrite(red2,    HIGH);
}

// define traffic light 3 modes
void traffic3_go(){
    digitalWrite(green3,  HIGH);
    digitalWrite(orange3, LOW);
    digitalWrite(red3,    LOW);
}

void traffic3_wait(){
    digitalWrite(green3,  HIGH);
    digitalWrite(orange3, HIGH);
    digitalWrite(red3,    LOW);
}

void traffic3_stop(){
    digitalWrite(green3,  LOW);
    digitalWrite(orange3, LOW);
    digitalWrite(red3,    HIGH);
}

// define traffic light 4 modes
void traffic4_go(){
    digitalWrite(green4,  HIGH);
    digitalWrite(orange4, LOW);
    digitalWrite(red4,    LOW);
}

void traffic4_wait(){
    digitalWrite(green4,  HIGH);
    digitalWrite(orange4, HIGH);
    digitalWrite(red4,    LOW);
}

void traffic4_stop(){
    digitalWrite(green4,  LOW);
    digitalWrite(orange4, LOW);
    digitalWrite(red4,    HIGH);
}
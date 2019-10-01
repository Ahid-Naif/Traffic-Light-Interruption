#include "initializations.h"
#include "traffic_light_modes.h"

void setup(){
    // define traffic light LEDs as INPUT
    defineTrafficLight1();
    defineTrafficLight2();
    defineTrafficLight3();
    defineTrafficLight4();

    // define IR receiver as OUTPUT
    defineReceiver();
}

void loop(){
    
}
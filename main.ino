#include "initializations.h"
#include "sequence.h"

void setup(){
    // define traffic light LEDs as INPUT
    defineTrafficLight1();
    defineTrafficLight2();
    defineTrafficLight3();
    defineTrafficLight4();

    // define IR receiver as OUTPUT
    defineReceiver();

    // set all traffic lights in initial state
    sequence0();

}

void loop(){
    
}
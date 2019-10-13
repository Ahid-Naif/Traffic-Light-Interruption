#include <Vector.h>

#include "initializations.h"
#include "sequences.h"

// traffic light related variables decleration
unsigned long onTime   = 5000; // ON   Time of 5000 ms (5 seconds)
unsigned long waitTime = 2000; // Wait Time of 2000 ms (2 seconds)
unsigned long previousTime, currentTime;

int sequenceCounter = 0;

// IR related variables decleration
const int RECV_PIN = 7;
IRrecv irrecv(RECV_PIN);
decode_results results;

Vector<int> commands;

void setup(){
    // define traffic light LEDs as INPUT
    defineTrafficLight1();
    defineTrafficLight2();
    defineTrafficLight3();
    defineTrafficLight4();

    // define IR receiver as OUTPUT
    defineReceiver();

    irrecv.enableIRIn(); // start receiving signals

    // set all traffic lights in initial state
    sequence0(); // to ensure all LEDs are OFF
    sequence1();
    sequenceCounter++;
    previousTime = millis(); // initializa previousTime variable
    for(;;){
        currentTime = millis();
        if(sequenceCounter == 1){
            if(currentTime - previousTime >= onTime){
                sequence2();
                sequenceCounter++;  
                previousTime = currentTime;
            }
        }
        else if(sequenceCounter == 2){
            if(currentTime - previousTime >= waitTime){
                sequence3();
                sequenceCounter++;
                previousTime = currentTime;
            }
        }
        else if(sequenceCounter == 3){
            if(currentTime - previousTime >= onTime){
                sequence4();
                sequenceCounter++;
                previousTime = currentTime;
            }
        }
        else if(sequenceCounter == 4){
            if(currentTime - previousTime >= waitTime){
                sequence5();
                sequenceCounter++;
                previousTime = currentTime;
            }
        }
        else if(sequenceCounter == 5){
            if(currentTime - previousTime >= onTime){
                sequence6();
                sequenceCounter++;
                previousTime = currentTime;
            }
        }
        else if(sequenceCounter == 6){
            if(currentTime - previousTime >= waitTime){
                sequence7();
                sequenceCounter++;
                previousTime = currentTime;
            }
        }
        else if(sequenceCounter == 7){
            if(currentTime - previousTime >= onTime){
                sequence8();
                sequenceCounter++;
                previousTime = currentTime;
            }
        }
        else if(sequenceCounter == 8){
            if(currentTime - previousTime >= waitTime){
                sequence1();
                sequenceCounter = 1;
                previousTime = currentTime;
            }
        }
        
        // check received signals
        
    }
}

void loop(){
    
}
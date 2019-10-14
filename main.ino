#include "initializations.h"
#include "sequences.h"
#include "doCommands.h"
#include "trafficLogic.h"

void setup()
{
    // define traffic light LEDs as INPUT
    defineTrafficLight1();
    defineTrafficLight2();
    defineTrafficLight3();
    defineTrafficLight4();

    // define IR receiver as OUTPUT
    defineReceiver();

    Serial.begin(9600);
    Serial.println("Start traffic...");

    // set all traffic lights in initial state
    sequence0(); // to ensure all LEDs are OFF
    sequence1();
    sequenceCounter++;
    previousTime = millis(); // initializa previousTime variable
    for (;;)
    {
        doTrafficLightLogic(0);
        
        commandExist = checkCommands();
        if (commandExist)
        {
            Serial.println("There are commands!!!!!!");
            startCommands();
        }
    }
}

void loop()
{
}
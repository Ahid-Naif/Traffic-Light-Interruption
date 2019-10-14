#include <IRremote.h>
#include <IRremoteInt.h>

#include "initializations.h"
#include "sequences.h"
#include "doCommands.h"
#include "trafficLogic.h"

// define IR receiver as OUTPUT
int RECV_PIN = 13;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
    // define traffic light LEDs as INPUT
    defineTrafficLight1();
    defineTrafficLight2();
    defineTrafficLight3();
    defineTrafficLight4();

    // Start the receiver
    irrecv.enableIRIn();

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

void receiveSignal()
{
    if (irrecv.decode(&results)) {
        String message = String(results.value, HEX);
        char command = decodeMessage(message);
        Serial.println(command);
        irrecv.resume(); // Receive the next value
    }
    delay(100);
}

char decodeMessage(String message ){
  if(message == "ff30cf")
  {
    return '1';
  }
  else if(message == "ff18e7")
  {
    return '2';
  }
  else if(message == "ff7a85")
  {
    return '3';
  }
  else if(message == "ff10ef")
  {
    return '4';
  }
  else
  {
    return '0';
  }
}
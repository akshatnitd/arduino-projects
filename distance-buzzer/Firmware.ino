#include "Global.h"



/* This code sets up the essentials for your circuit to work. It runs first every time your circuit is powered with electricity. */
void setup() {
    // Setup Serial which is useful for debugging
    // Use the Serial Monitor to view printed messages
    Serial.begin(9600);
    Serial.println("start");
    
    
}

/* This code is the main logic of your circuit. It defines the interaction between the components you selected. After setup, it runs over and over again, in an eternal loop. */
void loop() {
    
    
    
    while(1)
    
    {
      if (ultraSonic.getCms() < 30)
    
      {
          /* The LED will turn on and off for 500ms (0.5 sec)*/            
          led.on();                         // 1. turns on
                                         // 2. waits 500 milliseconds (0.5 sec). Change the value in the brackets (500) for a longer or shorter delay in milliseconds.
                                         // 4. waits 500 milliseconds (0.5 sec)\. Change the value in the brackets (500) for a longer or shorter delay in milliseconds.
      }
      else
      {
        led.off();

      }
      }
    
    
}

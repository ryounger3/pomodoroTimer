/**
    exampleMain.cpp
    Purpose: Controls a timer for a 30 minute work session.
    The relative time remaining is represented by LEDs.
    Two buttons are implemented to stop and start/restart the timer.

    @author Reece Chimento
    @version 1.0 4/23/2019
*/

const int TRUE = 1;
const int FALSE = 0;
volatile int isOn = FALSE;        // if not on, turn off all leds.
volatile int isInSession = FALSE; // if in session, cycle through green/blue/yellow leds.

/**
    Changes the isOn flag to OFF
*/
void stopButtonISR(void);




void setup() {

}

void loop() {
    
}

// 
int checkIsOnFlag(void)
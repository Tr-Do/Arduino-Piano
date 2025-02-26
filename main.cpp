////////////////////////////////////////////////////////////////////////////////////////
// OVERVIEW
////////////////////////////////////////////////////////////////////////////////////////
/*
DESCRIPTION:  This program reads 4 digital inputs and outputs their state to 4 digital
              outputs. Additionally, it outputs a tone to a buzzer, and prints to the
              serial monitor.

AUTHOR:       Andre' LaMote

COMMENTS:

From internet reverse engineering:

https://www.waitingforfriday.com/?p=586

Green – 415 Hz – G#4 (true pitch 415.305 Hz)
Red – 310 Hz – D#4 (true pitch 311.127 Hz)
Yellow – 252 Hz ‐ B3 (true pitch 247.942 Hz)
Blue – 209 Hz – G#3 (true pitch 207.652 Hz)

HISTORY: Version 1.0.

*/

////////////////////////////////////////////////////////////////////////////////////////
// INCLUDES
////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////
// DEFINES, MACROS AND CONSTANTS
////////////////////////////////////////////////////////////////////////////////////////

// pins for external inputs

const int BUTTON_C = 10;
const int BUTTON_D = 9;
const int BUTTON_E = 8;
const int BUTTON_F = 7;
const int BUTTON_G = 6;
const int BUTTON_A = 5;
const int BUTTON_B = 4;

const int BUZZER_PIN = 3; // use this pin for audio, supports PWM

const int TONE_C = 261;
const int TONE_D = 293;
const int TONE_E = 329;
const int TONE_F = 349;
const int TONE_G = 392;
const int TONE_A = 440;
const int TONE_B = 493;

////////////////////////////////////////////////////////////////////////////////////////
// GLOBALS
////////////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////////
// FUNCTIONS
////////////////////////////////////////////////////////////////////////////////////////

void setup()
{
    // the setup function runs once when you press reset or power the board
    // initialize digital pin(s)...

    // initialize output pins

    // initialize input pins
    pinMode(BUTTON_D, INPUT);
    pinMode(BUTTON_E, INPUT);
    pinMode(BUTTON_F, INPUT);
    pinMode(BUTTON_C, INPUT);
    pinMode(BUTTON_G, INPUT);
    pinMode(BUTTON_A, INPUT);
    pinMode(BUTTON_B, INPUT);

    // initialize serial port
    Serial.begin(115200);

    // write to terminal
    Serial.write("\n\rsetup() function complete.");

} // end setup

////////////////////////////////////////////////////////////////////////////////////////

void loop()
{
    // the loop function runs over and over again forever

    // read button input
    if (!digitalRead(BUTTON_F))
    {
        tone(BUZZER_PIN, TONE_F, 100);
    } // end if
    // read button input
    if (!digitalRead(BUTTON_E))
    {
        tone(BUZZER_PIN, TONE_E, 100);
    } // end if
    if (!digitalRead(BUTTON_G))
    {
        tone(BUZZER_PIN, TONE_G, 100);
    } // end if
    // read button input
    if (!digitalRead(BUTTON_D))
    {
        tone(BUZZER_PIN, TONE_D, 100);
    } // end if
    if (!digitalRead(BUTTON_C))
    {
        tone(BUZZER_PIN, TONE_C, 100);
    } // end if

    if (!digitalRead(BUTTON_A))
    {
        tone(BUZZER_PIN, TONE_A, 100);
    }
    if (!digitalRead(BUTTON_B))
    {
        tone(BUZZER_PIN, TONE_B, 100);
    }

    // wait for a second...
    delay(50);

} // end loop

////////////////////////////////////////////////////////////////////////////////////////
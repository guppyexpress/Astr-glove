/*
 * Astr-glove Firmware Version 1
 * Author: Sheen - TSar-Dev-Collective
 * Credits: Lucas_VRTech - LucidVR
 * Tsar-Dev-Collective
 */

#include "AdvancedConfig.h"

//This is the configuration file, main structure in _main.ino
//CONFIGURATION SETTINGS:
#define COMMUNICATION COMM_SERIAL //Which communication protocol to use
//serial over USB
  #define SERIAL_BAUD_RATE 115200
  
//serial over Bluetooth (Work in progress)
  #define BTSERIAL_DEVICE_NAME "Astr-glove-left"

//ANALOG INPUT CONFIG
#define ANALOG_MAX 4095   //4095 on ESP32, 1023 on Arduino. Make sure is the same as driver setting.
#define FLIP_POTS  false  //Flip values from potentiometers (for fingers!) if they are backwards

//Gesture enables, make false to use button override
#define TRIGGER_GESTURE true
#define GRAB_GESTURE    true
#define PINCH_GESTURE   true

//joystick configuration
#define JOYSTICK_BLANK false //make true if not using the joystick
#define JOY_FLIP_X false
#define JOY_FLIP_Y false
#define JOYSTICK_DEADZONE 10 //deadzone in the joystick to prevent drift (in percent)

#define NO_THUMB false //If for some reason you don't want to track the thumb

#define USING_CALIB_PIN false //When PIN_CALIB is shorted (or it's button pushed) it will reset calibration if this is on.

#define USING_FORCE_FEEDBACK false //Force feedback haptics allow you to feel the solid objects you hold
#define SERVO_SCALING false //dynamic scaling of servo motors

//PINS CONFIGURATION 
#if defined(__AVR__)
  //(This configuration is for Arduino Nano so make sure to change if you're on another board)
  #define PIN_PINKY     A0
  #define PIN_RING      A1
  #define PIN_MIDDLE    A2
  #define PIN_INDEX     A3
  #define PIN_THUMB     A4
  #define PIN_JOY_X     A6
  #define PIN_JOY_Y     A7
  #define PIN_JOY_BTN   7 
  #define PIN_A_BTN     8 
  #define PIN_B_BTN     9
  #define PIN_TRIG_BTN  10 //unused if gesture set
  #define PIN_GRAB_BTN  11 //unused if gesture set
  #define PIN_PNCH_BTN  12 //unused if gesture set
  #define PIN_CALIB     13 //button for recalibration
  #define DEBUG_LED     LED_BUILTIN
  #define PIN_PINKY_MOTOR     2 //used for force feedback
  #define PIN_RING_MOTOR      3 //^
  #define PIN_MIDDLE_MOTOR    4 //^
  #define PIN_INDEX_MOTOR     5 //^
  #define PIN_THUMB_MOTOR     6 //^
  #define PIN_MENU_BTN        8
#elif defined(ESP32)
  //(This configuration is for ESP32 DOIT V1 so make sure to change if you're on another board)
  #define PIN_PINKY     36
  #define PIN_RING      39
  #define PIN_MIDDLE    34
  #define PIN_INDEX     35
  #define PIN_THUMB     32
  #define PIN_JOY_X     33
  #define PIN_JOY_Y     25
  #define PIN_JOY_BTN   26
  #define PIN_A_BTN     27 
  #define PIN_B_BTN     14
  #define PIN_TRIG_BTN  12 //unused if gesture set
  #define PIN_GRAB_BTN  13 //unused if gesture set
  #define PIN_PNCH_BTN  23 //unused if gesture set
  #define PIN_CALIB     12 //button for recalibration
  #define DEBUG_LED 2
  #define PIN_PINKY_MOTOR     5  //used for force feedback
  #define PIN_RING_MOTOR      18 //^
  #define PIN_MIDDLE_MOTOR    19 //^
  #define PIN_INDEX_MOTOR     21 //^
  #define PIN_THUMB_MOTOR     17 //^
  #define PIN_MENU_BTN        27
#endif

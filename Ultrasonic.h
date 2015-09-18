/*
Ultrasonic.h - Library for using with HC-SR04 sensor
Created by Alfonso Aparicio González, September 17, 2015
Realesed into the public domain
*/

#ifndef Ultrasonic_h
#define Ultrasonic_h

#include "Arduino.h"

class Ultrasonic
{
  public:
  Ultrasonic(byte vcc, byte echo, byte trig, int limit); //Constructor
  float distance() //Calculates de distance to an object
  void reset() //Reset the Ultrasonic Sensor when bad measures are done.
  private:
  _vcc, //Control pin for voltage supply of the sensor, used to reset it.
  _echo; //Input pin for reciving the echo response
  _trig; //Output pin for sending the triggering signal
  _limit //Value of distance limit to measure in 'cm'
}



#endif

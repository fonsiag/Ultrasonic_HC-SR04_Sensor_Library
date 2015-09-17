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
  
  private:
  _vcc,
  _echo;
  _trig;
  _limit
}



#endif

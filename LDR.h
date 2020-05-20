#ifndef LDR_h
#define LDR_h
#include "Arduino.h"

class LDR
{
  private:
           int pinLdr;
           int value;
           float readData;
           float Vadc;

  public: 
           void initialize(int a);
           int valueLdr();
           float valueVLdr();
           
};

#endif

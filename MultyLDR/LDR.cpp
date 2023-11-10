#include "Arduino.h"
#include "LDR.h"

void LDR::initialize(int a)
{
  pinLdr=a;
}

int LDR::valueLdr()
{
  value=analogRead(pinLdr);
  return value;
}

float LDR::valueVLdr()
{
  readData=analogRead(pinLdr);
  Vadc=readData*5.0/1023.0;
  return Vadc;
}

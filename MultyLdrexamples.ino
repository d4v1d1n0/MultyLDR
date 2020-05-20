//include this for use the LDR.h library
//the library have 3 function:
//                            -initialize:write where the LDR are and in wich analog pin
//                            -valueLdr:return the analog input of the LDR (from 0 to 1023)
//                            -valueVLdr:return the value of the tension in the LDR (as a float, to 0.00 V from 5.00)
//   happy coding guy!                                                           
//                       for any upgrade or problem, write me to davidebrag@gmail.com
#include <LDR.h>
#include "LDR.h"
LDR ldr1;
int led=7;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);

}

void loop() {
  ldr1.initialize(A2);
  Serial.println(ldr1.valueVLdr());
  if(ldr1.valueVLdr()<2.00){digitalWrite(led, HIGH);}
  else {digitalWrite(led, LOW);}
  delay(200);

}

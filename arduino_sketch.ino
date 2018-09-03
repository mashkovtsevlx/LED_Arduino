#include "stdio.h"
int led1 = 13;
  // put your setup code here, to run once
 void setup() { 
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(9, 255);
analogWrite(10, 255);
analogWrite(11, 255);
}

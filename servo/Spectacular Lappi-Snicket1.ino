#include <Servo.h>

Servo servo1;

void setup()
{
  servo1.attach(12);
}

void loop()
{
  servo1.write(5);   // turn to 5 degree position
  delay(1000); // Wait for 1000 millisecond(s)
  servo1.write(75);  // turn to 75 degree position
  delay(1000); // Wait for 1000 millisecond(s)
}
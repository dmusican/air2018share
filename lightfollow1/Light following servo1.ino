#include <Servo.h>
// I am undercommenting to fit on screen
Servo servo1;
Servo servo2;

void setup()
{
  servo1.attach(12);
  servo2.attach(8);
  Serial.begin(9600);
}

void loop()
{
  int minLightValue = 2000; // bigger than any possible value
  int posWhereMinimumWas = 0;
  for (int pos=0; pos < 90; pos++)
  {
    // Move servo to appropriate spot and read light sensor
	servo1.write(pos);
    delay(100);
    int lightValue = analogRead(A0);
    
    // Check to see if greater than max and adjust accordingly
    if (lightValue < minLightValue)
    {
      minLightValue = lightValue;
      posWhereMinimumWas = pos;
    }
  }
  Serial.println(minLightValue);
  servo2.write(posWhereMinimumWas);
}




//  Serial.println(analogRead(A0));

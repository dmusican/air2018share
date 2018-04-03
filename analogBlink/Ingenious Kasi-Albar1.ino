int ledPin = 13;

// Code that is run once before the loop kicks in
// This is a "function" - mini program
void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // analogWrite takes a number from 0 to 255
  analogWrite(ledPin, 80);
  delay(1000); // Wait for 1000 millisecond(s)
  analogWrite(ledPin, 200);
  delay(1000); // Wait for 1000 millisecond(s)
  Serial.println("hello there");
}
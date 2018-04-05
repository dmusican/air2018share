void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Start it up Dave");
  int biggest = 0;
  int biggestPosition = 0;
  for (int i=0; i < 5; i++)
  {
    int potValue = analogRead(A0);
    Serial.println(potValue);
    if (potValue > biggest)
    {
      biggest = potValue;
      biggestPosition = i;
    }
    delay(500);
  }
  Serial.println("I did it! The big one is");
  Serial.println(biggest);
}
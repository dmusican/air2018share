int beeper = 11;
int freq = 100;

void setup()
{
  pinMode(beeper, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  for (int count=0; count < 3; count++)
  {
	tone(beeper, freq);
    delay(1000);
    noTone(beeper);
    delay(1000);
  }
  freq = freq + 10;
  Serial.println("new freq");
  Serial.println(freq);
  delay(10);
  
  if (freq == 600)
  {
    freq = 100;
  }
}
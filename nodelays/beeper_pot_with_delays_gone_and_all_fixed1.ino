int beeper = 6;
int pot = A0;
long interval = 1000;
int beeperState = 0; // indicates whether or not beeper is on
long lastFlippedTime = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pot,INPUT);
  pinMode(beeper,OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  
  unsigned long currentMillis = millis();
  
  if (currentMillis - lastFlippedTime > interval) {
    beeperState = !beeperState;
    lastFlippedTime = currentMillis;
  }
    
  int potValue = analogRead(pot);
  
  if (beeperState == 1) {
	  tone(beeper,potValue);
  } else {
	  noTone(beeper);
  }
  
  delay(30);
}
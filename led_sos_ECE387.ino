/**
 * Morse code for SOS Translation: ... --- ...
 */

 int sos_pin = 7;
void setup() {
  pinMode(sos_pin,INPUT);
  
}

void loop() {
  delay(2000);
  
  dot(); dot(); dot(); 
  dash(); dash(); dash();
  dot(); dot(); dot();

  delay(2000);
}


void dot() {
  digitalWrite(sos_pin, HIGH);
  delay(200);
  digitalWrite(sos_pin, LOW);
  delay(1000);
}

void dash() {
  digitalWrite(sos_pin, HIGH);
  delay(1000);
  digitalWrite(sos_pin, LOW);
  delay(1000);
}


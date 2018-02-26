const int LEDpin = 13;
const int buttonPin = 2;
int val;
void setup() {
  // put your setup code here, to run once:
  pinMode(LEDpin,OUTPUT);
  pinMode(buttonPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(buttonPin);
  if(val == HIGH)
  {
    digitalWrite(LEDpin,HIGH);
      delay(1000);
      digitalWrite(LEDpin,LOW);
      delay(1000);
  }
  else {digitalWrite(LEDpin,LOW);}

}

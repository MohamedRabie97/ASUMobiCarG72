const int ledpin = 13;
const int inputpin1 = 2;
const int inputpin2 = 3;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin,OUTPUT);
  pinMode(inputpin1,INPUT);
  pinMode(inputpin2,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(inputpin1)==HIGH)
  {digitalWrite(ledpin,LOW);}
  else if(digitalRead(inputpin2)==HIGH)
  {digitalWrite(ledpin,HIGH);}

}

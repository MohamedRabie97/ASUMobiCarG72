const int RED_LED = 12;
void setup ()
{
  pinMode(RED_LED,OUTPUT);
}

void loop()
{
  digitalWrite(RED_LED,HIGH);
  delay(500);
  digitalWrite(RED_LED,LOW);
  delay(1500);  
}


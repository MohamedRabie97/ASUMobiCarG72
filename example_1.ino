const int LED = 12;
void setup ()
{
  pinMode(LED,OUTPUT);
}

void loop()
{
  digitalWrite(LED,HIGH);
  delay(10000);
  digitalWrite(LED,LOW);
  delay(10000);  
}


const int LED_4 = 4;
const int LED_5 = 5;
const int LED_6 = 6;
const int LED_7 = 7;

void setup()
{
  pinMode(LED_4,OUTPUT);
  pinMode(LED_5,OUTPUT);
  pinMode(LED_6,OUTPUT);
  pinMode(LED_7,OUTPUT);
}

void loop()
{
  digitalWrite(LED_4,HIGH);
  delay(1000);
  digitalWrite(LED_4,LOW);

  digitalWrite(LED_5,HIGH);
  delay(1000);
  digitalWrite(LED_5,LOW);

  digitalWrite(LED_6,HIGH);
  delay(1000);
  digitalWrite(LED_6,LOW);

  digitalWrite(LED_7,HIGH);
  delay(1000);
  digitalWrite(LED_7,LOW);

  digitalWrite(LED_6,HIGH);
  delay(1000);
  digitalWrite(LED_6,LOW);

  digitalWrite(LED_5,HIGH);
  delay(1000);
  digitalWrite(LED_5,LOW);

  digitalWrite(LED_4,HIGH);
  delay(1000);
  digitalWrite(LED_4,LOW);
}


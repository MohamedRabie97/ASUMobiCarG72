int led=4;
void setup() {
  pinMode(led,OUTPUT);

}

void loop() {
  digitalWrite(led,HIGH);
  delay(500);
  digitalWrite(led,LOW);
  delay(1500);

}

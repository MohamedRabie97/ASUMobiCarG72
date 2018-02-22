int led1=4;
int led2=5;
int led3=6;
int led4=7;
void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);

}

void loop() {
 digitalWrite(led4,HIGH);
 delay(1000);
 digitalWrite(led4,LOW);
 digitalWrite(led3,HIGH);
delay(1000);
 digitalWrite(led3,LOW);
 digitalWrite(led2,HIGH);
delay(1000);
 digitalWrite(led2,LOW);
 digitalWrite(led1,HIGH);
 delay(1000);
digitalWrite(led1,LOW);
delay(1000);
digitalWrite(led1,HIGH);
delay(1000);
digitalWrite(led1,LOW);
digitalWrite(led2,HIGH);
  delay(1000);
 digitalWrite(led2,LOW);
 digitalWrite(led3,HIGH);
 delay(1000);
 digitalWrite(led3,LOW);
 digitalWrite(led4,HIGH);
 delay(1000);
 digitalWrite(led4,LOW);
}
 
 



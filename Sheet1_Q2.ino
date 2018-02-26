const int led_1 =4;
const int led_2 =5;
const int led_3 =6;
const int led_4 =7;
void setup() {
pinMode (led_1,OUTPUT);
pinMode (led_2,OUTPUT);
pinMode (led_3,OUTPUT);
pinMode (led_4,OUTPUT);

}

void loop() {
digitalWrite(led_1,HIGH);
delay(1000);
digitalWrite(led_1,LOW);
digitalWrite(led_2,HIGH);
delay(1000);
digitalWrite(led_2,LOW);
digitalWrite(led_3,HIGH);
delay(1000);
digitalWrite(led_3,LOW);
digitalWrite(led_4,HIGH);
delay(1000);
digitalWrite(led_4,LOW);
digitalWrite(led_4,HIGH);
delay(1000);
digitalWrite(led_4,LOW);
digitalWrite(led_3,HIGH);
delay(1000);
digitalWrite(led_3,LOW);
digitalWrite(led_2,HIGH);
delay(1000);
digitalWrite(led_2,LOW);
digitalWrite(led_1,HIGH);
delay(1000);
digitalWrite(led_1,LOW);
}

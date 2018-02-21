const int led_1=4;
void setup() {
pinMode (led_1 ,OUTPUT);
}

void loop() {
digitalWrite (led_1,HIGH);
delay (500);
digitalWrite (led_1,LOW);
delay(1500);
}

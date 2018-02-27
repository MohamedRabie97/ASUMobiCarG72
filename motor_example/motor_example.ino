int motorpin_1=13;
int motorpin_2=12;
int motorpin_3=6;
int motorpin_4=7;

void setup() {
  // put your setup code here, to run once:
pinMode (motorpin_1,OUTPUT);
pinMode (motorpin_2,OUTPUT);
pinMode (motorpin_3,OUTPUT);
pinMode (motorpin_4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

analogWrite(motorpin_1,255);
analogWrite(motorpin_2,255);
analogWrite(motorpin_3,255);
analogWrite(motorpin_4,255);

}

const int in1= 9 ;
const int in2 = 8 ;
const int in3 = 7;
const int in4 = 6;
const int ena = 10 ;
const int enb = 5;
char readchar;
int volt=255;
const int trigPin = 11;
const int echoPin = 12;
// defines variables
long duration;
int distance;
void setup()
{
Serial.begin(9600);
pinMode(in1, OUTPUT);//left side 
pinMode(in2, OUTPUT);//left 
pinMode(in3, OUTPUT);//right 
pinMode(in4, OUTPUT);//right 
pinMode(ena, OUTPUT);//enable a  left
pinMode(enb, OUTPUT);//enable b   right
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication

}
void loop()
{
  digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
if(distance<= 12)
{
  analogWrite(ena,volt);
   analogWrite(enb,volt);
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}
  else {
if(Serial.available()>0)
{
readchar=Serial.read();
if(readchar=='H'){
    volt=255;}
  if(readchar=='L'){
    volt=160;}
     if(readchar=='M'){
    volt=190;}
  if(readchar=='F'){
   analogWrite(ena,volt);
   analogWrite(enb,volt);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
 } 
 if(readchar=='B'){
   analogWrite(ena,volt);
   analogWrite(enb,volt);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
  }
   if(readchar=='R'){
   analogWrite(enb,volt);
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
   }
   if(readchar=='L'){
   analogWrite(ena,volt);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  }
   if(readchar=='s'){
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
  }
}
  }
}

#define tilt 8
int led=2;
void setup() {
              pinMode(tilt,INPUT);
              pinMode(led,OUTPUT);
              serial.begin(9600);

}

void loop() {
             int out = digitalRead(8);

             serial.println(out);

             delay(100);

             if(out==HIGH){digitalWrite(led,HIGH);}
             else{digitalWrite(led,LOW);}
}

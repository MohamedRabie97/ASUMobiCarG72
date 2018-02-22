int r=4;
int b=5;
int y=6;
int w=7;
void setup() {

              pinMode(r,OUTPUT);
              pinMode(b,OUTPUT);
              pinMode(y,OUTPUT);
              pinMode(w,OUTPUT);
}

void loop() {

             digitalWrite(r,HIGH);
             delay(1000);
             digitalWrite(r,LOW);
             digitalWrite(b,HIGH);
             delay(1000);
             digitalWrite(b,LOW);
             digitalWrite(y,HIGH);
             delay(1000);
             digitalWrite(y,LOW);
             digitalWrite(w,HIGH);
             delay(1000);
             digitalWrite(w,LOW);
             delay(1000);
             digitalWrite(w,HIGH);
             delay(1000);
             digitalWrite(w,LOW);
             digitalWrite(y,HIGH);
             delay(1000);
             digitalWrite(y,LOW);
             digitalWrite(b,HIGH);
             delay(1000);
             digitalWrite(b,LOW);
             digitalWrite(r,HIGH);
             delay(1000);
             digitalWrite(r,LOW);
             delay(1000);
}

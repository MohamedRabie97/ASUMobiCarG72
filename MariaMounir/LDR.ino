int led=11;
int ldr=A0;
int level;
void setup() {
              Serial.begin(9600);
              pinMode(led,OUTPUT);
              pinMode(ldr,INPUT);
}

void loop() {
              level=analogRead(ldr);
              
              level=map(level,0,1023,0,255);
              
              Serial.println(level);
              
              analogWrite(led,level);
              
              delay(200);
}

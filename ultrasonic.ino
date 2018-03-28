#define echoPin 11
#define trigPin 12
long distance, duration;

void setup() {
               
               pinMode(echoPin,INPUT);
               
               pinMode(trigPin,OUTPUT);
}

void loop() {
              digitalWrite(trigPin,LOW);
              delayMicroseconds(2);
              
              digitalWrite(trigPin,HIGH);
              delayMicroseconds(10);
              
              digitalWrite(trigPin,LOW);

              duration = pulseIn(echoPin,HIGH);

              distance = (duration/2) * 0.034029;

              if(distance < 200){
                                 stop();     //this instruction will stop the car 
                }
              

              
}

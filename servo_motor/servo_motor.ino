#include <Servo.h>
Servo servo_1;
void setup() {
  // put your setup code here, to run once:
servo_1.attach(6);
}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=0;i<255;i++){
 servo_1.write(i);
 delay(20);
  }
  for(int i=255;i>0;i--){
   servo_1.write(i);
   delay(20);
    }
}

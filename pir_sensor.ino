int pirpin=2;
int ledpin=6;
int buzzer=11;
void setup() {
              pinMode(pirpin,INPUT);
              pinMode(ledpin,OUTPUT);
              pinMode(buzzer,OUTPUT);
}

void loop() {
             int pir_val = digitalRead(pirpin);

             if (pir_val == HIGH){
                                   digitalWrite(ledpin,LOW);
                                   digitalWrite(buzzer,HIGH);                  
                                 }
            
             if (pir_val == LOW){
                                   digitalWrite(ledpin,HIGH);                 
                                   digitalWrite(buzzer,LOW);                                
                                }                    
}

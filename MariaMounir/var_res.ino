int var_res=A4;
int led=3;
int value;
void setup() {
               pinMode(led,OUTPUT);
               
               serial.begin(9600);    
}

void loop() {
             value=analogRead(var_res);
             
             value=map(value,0,1023,0,255);

             serial.println(value);
                          
             analogWrite(led,value);
             
}

void Forward(), Backward(), Right(), Left(), Stop(),  Follower();
float ReadPing ();
const int motorA1 = 2;
const int motorA2 = 4;
const int motorB1 = 7;
const int motorB2 = 8;
const int enA = 10;
const int enB =11;
int Velocity= 50;
int S1,S2,S3;


void setup() {
  Serial.begin(9600);
pinMode(motorA1, OUTPUT);
pinMode(motorA2, OUTPUT);
pinMode(motorB1, OUTPUT);
pinMode(motorB2, OUTPUT);
pinMode(enA, OUTPUT);
pinMode(enB, OUTPUT);
pinMode(S1, INPUT);
pinMode(S2, INPUT);
pinMode(S3,INPUT);

}

void loop() {


S1 = digitalRead(3);
S2 = digitalRead(5);
S3 = digitalRead(6);


Follower();


 
}
void Forward ()
{

analogWrite(enA, Velocity);
analogWrite(enB, Velocity);
digitalWrite(motorA1, HIGH); 
digitalWrite(motorA2, LOW); 
digitalWrite(motorB1, HIGH); 
digitalWrite(motorB2, LOW);
}

void Backward ()
{

analogWrite(enA, Velocity);
analogWrite(enB, Velocity);
digitalWrite(motorA1, LOW); 
digitalWrite(motorA2, HIGH);
digitalWrite(motorB1, LOW); 
digitalWrite(motorB2, HIGH);
}

void Right ()
{

analogWrite(enA, Velocity);
analogWrite(enB, Velocity+50);
digitalWrite(motorA1, LOW); 
digitalWrite(motorA2, HIGH); 
digitalWrite(motorB1, HIGH); 
digitalWrite(motorB2, LOW); 
}

void Left () 
{

analogWrite(enA, Velocity);
analogWrite(enB, Velocity+50);
digitalWrite(motorA1, HIGH); 
digitalWrite(motorA2, LOW);
digitalWrite(motorB1, LOW);
digitalWrite(motorB2, HIGH); 
}
void Stop () 
{
 
digitalWrite(motorA1, LOW); 
digitalWrite(motorA2, LOW); 
digitalWrite(motorB1, LOW); 
digitalWrite(motorB2, LOW);
}


void Follower ()
{
if(S3 && !S2 && S1) //move forward
{
Serial. println( "forward" ) ;

Forward();
        if(S3 && S2 && S1) //Stop
{
  Serial. println( "forward" ) ;

Forward();
  }

}
if(S3 && !S2 && !S1) //move right
{
  Serial. println( "low right" ) ;
  Left();
        if(S3 && S2 && S1) //Stop
{
  Serial. println( "low right" ) ;
  Left();
  }
}

if(S3 && S2 && !S1) //move right
{
  Serial. println( "right" ) ;
  Left();
      if(S3 && S2 && S1) //Stop
{
  Serial. println( "right" ) ;
  Left();
  
  }
}

if(!S3 && !S2 && S1) //move left
{
  
  Serial. println( "low left" ) ;
  Right();
    if(S3 && S2 && S1) //Stop
{
  Serial. println( "low left" ) ;
  Right();
  }
}

if(!S3 && S2 && S1) //move left
{
  Serial. println( "left" ) ;
  Right();
  if(S3 && S2 && S1) //Stop
{
  Serial. println( "left" ) ;
  Right();
  
  }
}

if(!S3 && !S2 && !S1) //Stop
{
  Serial. println( "forward" ) ;
Forward();
if(S3 && S2 && S1) //Stop

{
  Serial. println( "forward" ) ;
Forward();
}


}



}

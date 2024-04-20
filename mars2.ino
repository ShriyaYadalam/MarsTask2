void setup() 
{
  pinMode(10,OUTPUT);//trig
  pinMode(11,INPUT);//echo 

  pinMode(A0,OUTPUT);//pwm 
  pinMode(4,OUTPUT);//Direction
}

void loop()
{ 
  analogWrite(A0,155); 
  digitalWrite(4,HIGH); 
}

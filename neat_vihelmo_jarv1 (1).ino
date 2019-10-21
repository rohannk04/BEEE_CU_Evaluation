
int distance;
long duration;
void setup()
{
 pinMode(9,OUTPUT);
  pinMode(10,INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(9, LOW);
  delayMicroseconds(2); // Wait for 2 microsecond(s)
  
  digitalWrite(9, HIGH);
  delayMicroseconds(10);
  digitalWrite(9, LOW);
  
  duration=pulseIn(10,HIGH);
  
  distance=duration*0.034/2;
  
  Serial.print("Distance:");
  Serial.println(distance);
  
  if(distance>30)
  {
    for(i=0;i<255;i++)
      analogWrite(3,i);
  }
  
  
}
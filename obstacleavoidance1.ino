int maximumrange = 30;
long duration,distance;
void setup() 
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(12,INPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT); 
  pinMode(6,OUTPUT); 
  pinMode(7,OUTPUT); 
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
}
void forward()
{
  digitalWrite(11,HIGH);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);  
}
void backward()
{
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);  
}
void right()
{
  digitalWrite(11,LOW);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);  
}
void loop() 
{
 { 
  digitalWrite(13,HIGH);
  delay(1);
  digitalWrite(13,LOW);
  //delay(10);
  duration=pulseIn(12,HIGH);
  distance= duration/58.2;
  delay (50);
  Serial.println(distance);
 }
  if (distance>=30)
  {
    forward();
  }
  else if (distance < 15)
  {
    backward();
    delay(1000);
    right();
    delay(1000);
    forward();
  }
}

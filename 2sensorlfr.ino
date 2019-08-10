void setup() 
{
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(7,OUTPUT);
  digitalWrite(7,HIGH);
  pinMode(12,OUTPUT);
  digitalWrite(12,HIGH);
  pinMode(9,OUTPUT);
  digitalWrite(9,HIGH);

}
void forward()
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW); 
}

void backward()
{
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH); 
}

void right()
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW); 
}

void left()
{
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW); 
}

void steepright()
{
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH); 
}

void steepleft()
{
  digitalWrite(6,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW); 
}
void loop() 
{
  if (digitalRead(11)==0 && digitalRead(10)==0)
  {
    forward();
  }
  if (digitalRead(11)==1 && digitalRead(10)==1)
  {
    backward();
  }
}

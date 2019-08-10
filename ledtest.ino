void setup()
{
pinMode(7,INPUT);
pinMode(6,INPUT);
pinMode(5,INPUT);
pinMode(11,OUTPUT);  //red1
pinMode(12,OUTPUT);//yelllow1
pinMode(13,OUTPUT);//green1
pinMode(8,OUTPUT);//red2
pinMode(9,OUTPUT);//yellow2
pinMode(10,OUTPUT);//green2
}
void loop()
{
 if((digitalRead(6)==1)&&(digitalRead(7)==1)&&(digitalRead(5)==1))
 {
digitalWrite(11,HIGH);//RED1 AND GREEN2 IS HIGH
digitalWrite(10,HIGH);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
delay(5000);
digitalWrite(11,LOW);
digitalWrite(10,LOW);//Y1 AND R2 ARE HIGH
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);
delay(1000);
digitalWrite(11,LOW);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);
digitalWrite(13,HIGH);
digitalWrite(12,LOW);
digitalWrite(10,HIGH);
delay(5000);
digitalWrite(11,HIGH);
digitalWrite(10,LOW);//Y1 AND R2 ARE HIGH
digitalWrite(12,LOW);
digitalWrite(13,LOW);
digitalWrite(9,HIGH);
digitalWrite(8,LOW);
delay(1000);
 }
  if((digitalRead(6)==0)&&(digitalRead(7)==0)&&(digitalRead(5)==0))
 {
digitalWrite(11,HIGH);//RED1 AND GREEN2 IS HIGH
digitalWrite(10,HIGH);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
delay(5000);
digitalWrite(11,LOW);
digitalWrite(10,LOW);//Y1 AND R2 ARE HIGH
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);
delay(1000);
digitalWrite(11,LOW);
digitalWrite(10,LOW);//R2 AND G1 ARE HIGH
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);
delay(5000);
 }
  if((digitalRead(6)==0)&&(digitalRead(7)==0)&&(digitalRead(5)==1))
{
 digitalWrite(11,HIGH);//RED1 AND GREEN2 IS HIGH
digitalWrite(10,HIGH);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
delay(5000);
digitalWrite(11,LOW);
digitalWrite(10,LOW);//Y1 AND R2 ARE HIGH
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);
delay(1000);
digitalWrite(11,LOW);
digitalWrite(10,LOW);//R2 AND G1 ARE HIGH
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);
delay(5000);
}
 if((digitalRead(6)==0)&&(digitalRead(7)==1)&&(digitalRead(5)==0))
{
 digitalWrite(11,HIGH);//RED1 AND GREEN2 IS HIGH
digitalWrite(10,HIGH);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
delay(5000);
digitalWrite(11,LOW);
digitalWrite(10,LOW);//Y1 AND R2 ARE HIGH
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);
delay(1000);
digitalWrite(11,LOW);
digitalWrite(10,LOW);//R1 AND G2 ARE HIGH
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);
delay(5000);
}
 if((digitalRead(6)==1)&&(digitalRead(7)==0)&&(digitalRead(5)==0))
{
  digitalWrite(11,LOW);//RED1 AND GREEN2 IS HIGH
digitalWrite(10,LOW);
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);
delay(5000);
digitalWrite(11,LOW);
digitalWrite(10,LOW);//Y1 AND R2 ARE HIGH
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);
delay(1000);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);//R2 AND G1 ARE HIGH
digitalWrite(12,LOW);
digitalWrite(13,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
delay(5000);
}
 if((digitalRead(6)==1)&&(digitalRead(7)==1)&&(digitalRead(5)==0))
{
   digitalWrite(11,LOW);//G1 HIGH R2 HIGH
digitalWrite(10,LOW);
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);
delay(10000);
digitalWrite(11,LOW);
digitalWrite(10,LOW);//Y1 AND R2 ARE HIGH
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);
delay(1000);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);//R2 AND G1 ARE HIGH
digitalWrite(12,LOW);
digitalWrite(13,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
delay(5000);
}
 if((digitalRead(6)==1)&&(digitalRead(7)==0)&&(digitalRead(5)==1))
{
digitalWrite(11,HIGH);//RED1 AND GREEN2 IS HIGH
digitalWrite(10,HIGH);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
delay(5000);
digitalWrite(11,LOW);
digitalWrite(10,LOW);//Y1 AND R2 ARE HIGH
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);
delay(1000);
digitalWrite(11,LOW);
digitalWrite(10,LOW);//R2 AND G1 ARE HIGH
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);
delay(5000); 
}
 if((digitalRead(6)==0)&&(digitalRead(7)==1)&&(digitalRead(5)==1))
{
  digitalWrite(11,HIGH);//RED1 AND GREEN2 IS HIGH
digitalWrite(10,HIGH);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
delay(10000);
digitalWrite(11,LOW);
digitalWrite(10,LOW);//Y1 AND R2 ARE HIGH
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);
delay(1000);
digitalWrite(11,LOW);
digitalWrite(10,LOW);//R2 AND G1 ARE HIGH
digitalWrite(12,LOW);
digitalWrite(13,HIGH);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);
delay(5000);
}
}


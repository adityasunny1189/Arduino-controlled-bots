#include <Servo.h>
Servo servo1;
Servo servo2;
int trigPin=5;
int echoPin=6;
int servoPin1=7;
int servoPin2=9;
int led=10;
long duration,dist,average;
long aver[3];

void setup() {
  Serial.begin(9600);
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  servo1.write(0);
  servo2.write(0);
  delay(100);
  servo1.detach();
  servo2.detach();
  // put your setup code here, to run once:

}
void measure(){
  digitalWrite(10,HIGH);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(15);
  digitalWrite(trigPin,LOW);
  pinMode(echoPin,INPUT);
  duration=pulseIn(echoPin,HIGH);
  dist=(duration/2)/29.1;
}
void loop(){
  int i;
 for(i=0;i<=2;i++)
 measure();
 aver[i]=dist;
 delay(10);

dist=(aver[0]+aver[1]+aver[2])/3;
if (dist<50){
  servo1.write(0);
   servo2.write(0);
  delay(3000);
  servo1.write(150);
  servo2.write(150);
  delay(1000);
  servo1.detach();
  servo2.detach();
}
Serial.print(dist);
}// put your main code here, to run repeatedly:



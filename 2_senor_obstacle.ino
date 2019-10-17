int trigPin1 = 9;
int echoPin1 = 10;
int trigPin2 = 5;
int echoPin2 = 6;      

void setup() {
 Serial.begin(9600); 
   pinMode(13, OUTPUT);
   pinMode(12, OUTPUT);
   pinMode(8, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(2, OUTPUT);
   pinMode(3, OUTPUT);
   pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  pinMode(4,OUTPUT);
  digitalWrite(4,HIGH);
  
  // put your setup code here, to run once: 
}
 
void loop() {
  long duration1, distance1,duration2, distance2;
  //code for sensor 1
  digitalWrite(trigPin1,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin1, LOW);
  duration1=pulseIn(echoPin1, HIGH);
   distance1 =(duration1/2)/29.1;

  //code for sensor 2
  digitalWrite(trigPin2,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin2, LOW);
  duration2=pulseIn(echoPin2, HIGH);
  distance2 =(duration2/2)/29.1;
   Serial.print("sensor1 :");
  Serial.print(distance1);
  Serial.println(" CM");
  Serial.print("sensor2 :");
  Serial.print(distance2);
 
 
 
  
 if((distance1>20)&&(distance2>20))
 {
  digitalWrite(13,HIGH);                               //       If you dont get proper movements of your robot,
   digitalWrite(12,LOW);                               //        then alter the pin numbers
   digitalWrite(7,HIGH);                               //
   digitalWrite(8,LOW);  
                            
 }
 
  else if((distance1<20)&&(distance2>20))  
 {
   digitalWrite(13,LOW);                               //       If you dont get proper movements of your robot,
   digitalWrite(12,HIGH);                               //        then alter the pin numbers
   digitalWrite(7,HIGH);                               //
   digitalWrite(8,LOW);
                                            
 }
   else if((distance1>20)&&(distance2<20))  
 {
   digitalWrite(13,HIGH);                               //       If you dont get proper movements of your robot,
   digitalWrite(12,LOW);                               //        then alter the pin numbers
   digitalWrite(7,LOW);                               //
   digitalWrite(8,HIGH);
                                            
 }   
 else if((distance1<20)&&(distance2<20))   {
   digitalWrite(13,HIGH);                               //       If you dont get proper movements of your robot,
   digitalWrite(12,LOW);                               //        then alter the pin numbers
   digitalWrite(7,LOW);                               //
   digitalWrite(8,HIGH);
   delay(1000);
                                           
 }
 
}

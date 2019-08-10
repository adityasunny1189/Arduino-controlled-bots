int maximumrange = 30;
long duration,distance;
void setup() {
 Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(12,INPUT);
}

void loop() {
digitalWrite(13,HIGH);
  delay(1);
  digitalWrite(13,LOW);
  //delay(10);
  duration=pulseIn(12,HIGH);
  distance= duration/58.2;
  delay (50);
  Serial.println(distance);
}

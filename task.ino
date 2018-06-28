//example1
//light led by pressing push button
#define led 13 
#define button 8
const int sensorPin = A0;
int reading;
float voltage;

void setup(){
 pinMode(led,OUTPUT);
 pinMode(button,INPUT); 
 Serial.begin(9600);
}
void loop(){
boolean sw = digitalRead(button);
 if(sw==HIGH){
  digitalWrite(led,HIGH);
Serial.println("ON");
 }
 else {
   digitalWrite(led,LOW);
   Serial.println("OFF");
   }
   
   reading = analogRead(sensorPin);
   voltage = reading * 5.0/1024;
   Serial.print(voltage);
}

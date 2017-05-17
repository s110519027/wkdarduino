const int analogPin = A0;
const int ledCount = 10;
int num=0;
int ledPins[]={2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

void setup() {
  for(int thisLed=0; thisLed<ledCount; thisLed++){
    pinMode(ledPins[thisLed],OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {

  int sensorValue=analogRead(analogPin);
  int ledLevel = map(sensorValue, 0, 1023, 5, ledCount);


  digitalWrite(2,HIGH);
  delay( ledLevel*50);
 digitalWrite(2,LOW);
   delay( ledLevel*50);
   
 digitalWrite(11,HIGH);
 delay( ledLevel*50);
 digitalWrite(11,LOW);
  delay( ledLevel*50);
     
 digitalWrite(3,HIGH);
 delay( ledLevel*50);
 digitalWrite(3,LOW);
  delay( ledLevel*50);
   
 digitalWrite(10,HIGH);
 delay( ledLevel*50);
 digitalWrite(10,LOW);
  delay( ledLevel*50);

     
 digitalWrite(4,HIGH);
 delay( ledLevel*50);
 digitalWrite(4,LOW);
  delay( ledLevel*50);

     
 digitalWrite(9,HIGH);
 delay( ledLevel*50);
 digitalWrite(9,LOW);
  delay( ledLevel*50);
   
 digitalWrite(5,HIGH);
 delay( ledLevel*50);
 digitalWrite(5,LOW);
  delay( ledLevel*50);
   
 digitalWrite(8,HIGH);
 delay( ledLevel*50);
 digitalWrite(8,LOW);
  delay( ledLevel*50);  

      
if(!(num%2)){
 digitalWrite(6,HIGH);
 delay( ledLevel*50);
     
 digitalWrite(7,HIGH);
 delay( ledLevel*50);
  
    digitalWrite(2,HIGH);
    digitalWrite(11,HIGH);
  delay(ledLevel*10);

  digitalWrite(3,HIGH);
    digitalWrite(10,HIGH);
  delay(ledLevel*10);

  digitalWrite(4,HIGH);
    digitalWrite(9,HIGH);
  delay(ledLevel*10);

 digitalWrite(5,HIGH);
    digitalWrite(8,HIGH);
  delay(ledLevel*10);
}
 else{ 
 delay( ledLevel*50);
 digitalWrite(6,LOW);
 delay( ledLevel*100);

 delay( ledLevel*50);
 digitalWrite(7,LOW);
 delay( ledLevel*50);
 }

 
 delay( ledLevel*100);
   num++;
}




 /* for(int thisLed=0; thisLed<ledCount; thisLed++){
    if (thisLed<=ledLevel){
      digitalWrite(ledPins[thisLed],HIGH);
    }
    else{
      digitalWrite(ledPins[thisLed],LOW);
    }
  }
*/


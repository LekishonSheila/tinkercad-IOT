// C++ code

int  trigpin = 8;
  int echopin= 7;
long duration;
int distance;
void setup()
{
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);

  Serial.begin(9600);
}

void loop(){
  digitalWrite(trigpin,LOW);
  delay(2000);
   digitalWrite(trigpin,HIGH);
    delay(4000);
    digitalWrite(echopin,LOW);
    delay(2000);
     digitalWrite(echopin,HIGH);
     delay(4000);
     duration = pulseIn(echopin,HIGH);
     distance = duration*0.34/2;
     Serial.print("Distance:");
     Serial.print(distance);
     Serial.print("cm");
}

 
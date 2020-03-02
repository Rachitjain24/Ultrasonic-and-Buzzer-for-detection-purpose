int const trigPin = 10; int const echoPin = 9;
int const buzzPin = 2;
void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(buzzPin, OUTPUT); // buzz pin is output to control buzzering 
}

void loop() {
int duration, distance;
digitalWrite(trigPin, HIGH);
delay(1);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;
Serial.print(distance);
if (distance <= 50 && distance >= 0) 
{
digitalWrite(buzzPin, HIGH);
}
else {
digitalWrite(buzzPin, LOW);
}
delay(60);
}

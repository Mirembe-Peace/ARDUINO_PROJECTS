long duration;
int distance;

const int trigPin = 11;
const int echo = 12;
void setup() {
  // put your setup code here, to run once:
pinMode(trigPin, OUTPUT);
pinMode(echo, INPUT);
Serial.begin(115200);
pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin, HIGH);

duration = pulseIn(echo, HIGH);
distance = (duration * 0.034 )/ 2;

if(distance <= 5){
digitalWrite(7, HIGH);

}
else{
  digitalWrite(7, LOW);
  digitalWrite(trigPin, LOW);


}
}

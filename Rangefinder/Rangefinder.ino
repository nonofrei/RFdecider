// Define Trig and Echo pin:
#define trigPin 10
#define echoPin 13
// Define variables:
long duration;
int distance;
void setup() {
  // Define inputs and outputs:
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  //Begin Serial communication at a baudrate of 9600:
  Serial.begin(9600);
}
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Read the echoPin, pulseIn() returns the duration (length of the pulse) in microseconds:
  duration = pulseIn(echoPin, HIGH);
  // Calculate the distance:
  distance= duration*0.034/2;
  // Print the distance on the Serial Monitor
  //Serial.print("Distance = ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(50);
}

const int sensorPin = 2;
const int relayPin = 4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = digitalRead(sensorPin);
  Serial.println(sensorValue);

  if (sensorValue == 0){
    digitalWrite(relayPin, LOW);
  }
  else if (sensorValue == 1){
    digitalWrite(relayPin, HIGH);
  }
  delay(50);
}

#define MQ2_ANALOG A1
#define MQ2_DIGITAL 2

void setup() {
  // Pin initial configuration
  Serial.begin(9600);
  pinMode(MQ2_ANALOG, INPUT);
  pinMode(MQ2_DIGITAL, INPUT);

}

void loop() {
  // Gas Sensor interaction with Arduino Uno simulation
  Serial.print("Analog: ");
  Serial.println(analogRead(MQ2_ANALOG));
  Serial.print("Digital: ");
  Serial.println(digitalRead(MQ2_DIGITAL));
  delay(1000);
}

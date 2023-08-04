#define BatValuePin 3
#define LedPin 10
#define ds18Pin 18
#define ADC1_CH2 2
#define Freepin 6
#define Freepin 7

float readAnalogVoltage() {
  pinMode(BatValuePin, INPUT);
  int analogValue = analogRead(BatValuePin);
  float voltage = analogValue * 2.5 / 4095;
  return map(voltage, 0, 2.5, 2.7, 4.2);
}

int ledControl(int state) {
  pinMode(LedPin, OUTPUT);
  digitalWrite(LedPin, state);
  return 0;
}

void setup() {
  Serial.begin(115200); 
}

void loop() {
  Serial.println(readAnalogVoltage);
  ledControl(true);
  delay(200); 
  ledControl(false);

  delay(1000);
}

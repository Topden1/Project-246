const byte buzzer_gpio = 18;
#define POTENTIOMETER_PIN  15

void setup() {
  Serial.begin(9600);

  pinMode(POTENTIOMETER_PIN, INPUT);
  pinMode(buzzer_gpio, OUTPUT);
}

void loop() {
  int analogValue = analogRead(POTENTIOMETER_PIN);
  int brightness = map(analogValue, 0, 4095, 0, 255);
  ledcWrite(0, brightess);
  Serial.println(brightness);
  delay(30);
}
const int MIC_PIN = 13;

void setup() {
  Serial.begin(115200);  // Make sure Serial Monitor matches this
}

void loop() {
  int raw = analogRead(MIC_PIN);               // 0–4095
  float voltage = raw * (3.3 / 4095.0);           // Convert to volts
  Serial.println(voltage);                         // Plot in Serial Plotter

  delay(20);
}
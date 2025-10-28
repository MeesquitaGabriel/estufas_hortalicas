const int PIN_TMP36 = A0;
const int PIN_LED   = 3;
const int PIN_BUZZ  = 4;
const int PIN_FAN   = 5;

float readCelsiusTMP36() {
  int adc = analogRead(PIN_TMP36);
  float volts = adc * (5.0 / 1023.0);
  return (volts - 0.5) * 100.0;
}

void setup() {
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_BUZZ, OUTPUT);
  pinMode(PIN_FAN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  float t = readCelsiusTMP36();
  Serial.print("Temperatura: ");
  Serial.print(t);
  Serial.println(" °C");

  if (t >= 30 && t <= 50) {
    digitalWrite(PIN_FAN, HIGH);
    digitalWrite(PIN_LED, LOW);
    digitalWrite(PIN_BUZZ, LOW);
  } else if (t > 50) {
    digitalWrite(PIN_FAN, HIGH);
    digitalWrite(PIN_LED, HIGH);
    digitalWrite(PIN_BUZZ, HIGH);
  } else {
    digitalWrite(PIN_FAN, LOW);
    digitalWrite(PIN_LED, LOW);
    digitalWrite(PIN_BUZZ, LOW);
  }

  delay(500);
}

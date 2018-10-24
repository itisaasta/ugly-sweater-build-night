

const int LED_PIN = 12;
const int SERIAL_BAUD = 9600;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(SERIAL_BAUD);
}

void loop() {
    Serial.println("Blink.");
    digitalWrite(LED_PIN, HIGH); 
    delay(1000);
    digitalWrite(LED_PIN, LOW);
    delay(1000);
}


const int SWITCH_PIN = 0;
const int LED_PIN = 1;

int last_pin_state;
 
void setup() {
  pinMode(SWITCH_PIN, INPUT);
  digitalWrite(SWITCH_PIN, HIGH);
  pinMode(LED_PIN, OUTPUT);
}
 
void loop() {
  int pin_state = digitalRead(SWITCH_PIN);
  if (pin_state != last_pin_state) {
    int led_state = (pin_state == LOW) ? HIGH : LOW;
    digitalWrite(LED_PIN, led_state);
    last_pin_state = pin_state;
  }
}


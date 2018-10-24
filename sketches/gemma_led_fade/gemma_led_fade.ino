

/* LED_PIN must support PWM (pins identified with tilde ~) */
const int LED_PIN = 0;

int brightness = 0;    // store current brightness
int fadeAmount = 5;    // how many points to fade the LED by

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  analogWrite(LED_PIN, brightness);

  // change the brightness for next time through the loop
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ;
  }

  // wait to see the dimming effect
  delay(30);
}

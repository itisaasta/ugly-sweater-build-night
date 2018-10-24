#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

const int DATA_PIN = 0;
const int PIXEL_NUM = 5;

const int BRIGHTNESS = 64;
const int WAIT = 80; // delay transitioning colors

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_NUM, DATA_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pinMode(DATA_PIN, INPUT);
  digitalWrite(DATA_PIN, HIGH);
  strip.begin();
  strip.setBrightness(BRIGHTNESS);
}

void loop() {
  colorWipe(strip.Color(255, 0, 0), WAIT); // Red
  colorWipe(strip.Color(0, 255, 0), WAIT); // Green
  colorWipe(strip.Color(0, 0, 255), WAIT); // Blue
}

// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    delay(wait);
  }
}



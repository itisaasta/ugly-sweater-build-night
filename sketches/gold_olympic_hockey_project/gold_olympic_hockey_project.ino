int fsrAnalogPin = 1; // FSR is connected to analog 1   
int fsrReading;
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

const int DATA_PIN = 0;

const int PIXEL_NUM = 60;

const int BRIGHTNESS = 64;
const int WAIT = 10; // delay transitioning colors

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
//   NEO_RGBW    Pixels are wired for RGBW bitstream (NeoPixel RGBW products)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_NUM, DATA_PIN, NEO_GRB + NEO_KHZ800);
 
void setup(void) {
  //pinMode(DATA_PIN, INPUT);
  //digitalWrite(DATA_PIN, HIGH);

  #if defined (__AVR_ATtiny85__)
    if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
  #endif
  
  strip.begin();
  //strip.clear();
  strip.show();
  strip.setBrightness(BRIGHTNESS);
}
 
void loop(void) {
  fsrReading = analogRead(fsrAnalogPin);
  if (fsrReading > 1000) {
    colorWipe(strip.Color(255, 0, 0), WAIT); // Red
    colorWipe(strip.Color(255, 255, 255), WAIT); // Green
    colorWipe(strip.Color(0, 0, 255), WAIT); // Blue
    colorWipe(strip.Color(255, 215, 0), WAIT); // Gold
  strip.clear();
  strip.show();
  

  } else {
     digitalWrite(DATA_PIN, LOW);
  }
  delay(100);
  }

// Fill the dots one after the other with a color
void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    delay(wait);
  }
}

# tech-wearables-build-night
This repo is the one-stop-shop for anything technology wearables build night.

## Build Night Guide
[Guide](https://github.com/HarvAce/tech-wearables-build-night/blob/master/technology-wearables-build-night-guide.pdf)

## Arduino IDE Installation
NOTE: Even if you already have the Arduino IDE installed, you will need the Adafruit Board Support Package under "Additional Boards Manager URLs".
- [Install Arduino IDE](https://learn.adafruit.com/adafruit-arduino-ide-setup/arduino-1-dot-6-x-ide)

Some components will require additional libraries. To install these libraries:
1. In Arduino IDE menu navigate to "Sketch->Include Library->Manage Libraries...". 
2. In "Library Manager" dialog focus "Filter your search" field and enter desired library (e.g. "TCS34725"). 
3. In search results select desired library (e.g. "Adafruit TCS34725"), select latest version, and click "Install" button.

Component libraries
- Adafruit NeoPixel (neopixel, jewel, etc)
- Adafruit TCS34725 (color sensor)
- Adafruit LSM303DLHC (accelerometer + compass)
- Adafruit SI1145 Library (UV sensor)

- CapacitiveSensor (conductive fabric https://github.com/arduino-libraries/CapacitiveSensor/zipball/master)
For CapacitiveSensor, save zip and use menu item "Sketch > Include Library > Add .ZIP Library" 

## Fritzing Installation
NOTE: Fritzing is not required, yet it can be used to make nice diagrams of your projects.
- [Install Fritzing](http://fritzing.org/download/)
- [Load Adafruit Stencils](https://learn.adafruit.com/using-the-adafruit-library-with-fritzing?view=all)

## Components
All of the components are labeled with their name and a colored dot - pink for Adafruit FLORA, purple for Adafruit Gemma, red for lights, green for sensors and actuators, black for utilities, and yellow for cables.

Most components can be found for purchase via Amazon or Adafruit.

### Adafruit FLORA - 1 type - pink
- 12 FLORAs x(3 cables + 2 batteries + 1 JST connector + 1 neopixel + 1 micro-USB cable) in each - A:11, M:1
	- [Product Page](https://www.adafruit.com/product/659)
![FLORA pinout](https://github.com/HarvAce/tech-wearables-build-night/blob/master/images/flora_pinout.png)

### Adafruit Gemma - 1 type - purple
- 10 Gemmas x(3 cables + 2 batteries + 1 JST connector + 1 neopixel + 1 micro-USB cable) in each - A:8, M:2
	- [Product Page](https://www.adafruit.com/product/1222)
![Gemma pinout](https://github.com/HarvAce/tech-wearables-build-night/blob/master/images/gemma_pinout.png)

### Lights - 6 types - red
- 41 neopixels - A:9, M:32
	- [Product Page](https://www.adafruit.com/product/1559)
	- Code Samples
		- [FLORA](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/flora_neopixel_rainbow)
		- [Gemma](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/gemma_neopixel_rainbow)

![Neopixel](https://github.com/HarvAce/tech-wearables-build-night/blob/master/images/neopixel.jpg)

- 5 blue sequins
	- [Product Page](https://www.adafruit.com/product/1757)
	- Code Samples
		- [FLORA](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/flora_led_blink)
		- [Gemma](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/gemma_led_blink)

![Blue Sequin](https://github.com/HarvAce/tech-wearables-build-night/blob/master/images/blue_led.jpg)

- 5 red sequins
	- [Product Page](https://www.adafruit.com/product/1755)
	- Code Samples
		- [FLORA](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/flora_led_blink)
		- [Gemma](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/gemma_led_blink)

![Red Sequin](https://github.com/HarvAce/tech-wearables-build-night/blob/master/images/red_led.jpg)

- 2 neopixel jewels - A:1, M:1
	- [Product Page](https://www.adafruit.com/product/2226)
	- Code Samples
		- [FLORA](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/flora_neopixel_jewel_colorwipe)
		- [Gemma](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/gemma_neopixel_jewel_colorwipe)

![Neopixel Jewel](https://github.com/HarvAce/tech-wearables-build-night/blob/master/images/neopixel_jewel.jpg)

- 1 neopixel ring
	- [Product Page](https://www.adafruit.com/product/1586)
	- Code Samples
		- [FLORA](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/flora_neopixel_ring)
		- [Gemma](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/gemma_neopixel_ring)

![Neopixel Ring](https://github.com/HarvAce/tech-wearables-build-night/blob/master/images/neopixel_ring.jpg)

- 2 neopixel strips
	- [Product Page](https://www.adafruit.com/product/2842)
	- Code Samples
		- [FLORA](ttps://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/flora_neopixel_strip)
		- [Gemma](ttps://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/gemma_neopixel_strip)

![Neopixel Strip](https://github.com/HarvAce/tech-wearables-build-night/blob/master/images/neopixel_strip.jpg)

### Sensors & Actuators - 10 types - green
- 1 speaker
	- [Product Page](https://www.adafruit.com/product/1890)
	- Code Samples
		- [FLORA](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/flora_speaker)
		- [Gemma](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/gemma_speaker)

![Speaker](https://github.com/HarvAce/tech-wearables-build-night/blob/master/images/speaker.jpg)

- 2 tilt ball switches - A:1, M:1
	- [Product Page](https://www.adafruit.com/product/173)
	- Code Samples
		- [FLORA](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/flora_tiltswitch_debouncer)
		- [Gemma](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/gemma_tiltswitch_debouncer)

![Tilt Ball Switch](https://github.com/HarvAce/tech-wearables-build-night/blob/master/images/tilt_ball_switch.jpg)

- 2 soft potentiometers
	- [Product Page](https://www.adafruit.com/product/2273)
	- Code Samples
		- [FLORA](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/flora_soft_potentiometer)
		- [Gemma](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/gemma_soft_potentiometer)

![Soft Potentiometer](https://github.com/HarvAce/tech-wearables-build-night/blob/master/images/soft_potentiometer.jpg)

- 6 on/off switches
	- [Product Page](https://www.adafruit.com/product/1092)
	- Code Samples
		- [FLORA](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/flora_pushbutton)
		- [Gemma](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/gemma_pushbutton)

![On/Off Switch](https://github.com/HarvAce/tech-wearables-build-night/blob/master/images/on_off_switch.jpg)

- 3 button switches
	- [Product Page](https://www.sparkfun.com/products/8776)
	- Code Samples
		- [FLORA](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/flora_pushbutton)
		- [Gemma](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/gemma_pushbutton)

![Button Board](https://github.com/HarvAce/tech-wearables-build-night/blob/master/images/button_board.jpg)

- 4 color sensors - A:3, M:1
	- [Product Page](https://www.adafruit.com/product/1356)
	- Code Samples
		- [FLORA](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/flora_color_sensor_print)
		- [Gemma]()

![Color Sensor](https://github.com/HarvAce/tech-wearables-build-night/blob/master/images/color_sensor.jpg)

- 4 UV light sensors - A:3, M:1
	- [Product Page](https://www.adafruit.com/product/1981)
	- Code Samples
		- [FLORA](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/flora_uv_light_sensor)

![UV Light Sensor](https://github.com/HarvAce/tech-wearables-build-night/blob/master/images/uv_light_sensor.jpg)

- 2 accelerometer + compass - A:1, M:1
	- [Accelerometer + Compass](https://www.adafruit.com/product/1247)
	- Code Samples
		- [FLORA](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/flora_accelerometer_compass)

![Accelerometer + Compass](https://github.com/HarvAce/tech-wearables-build-night/blob/master/images/accelerometer_compass.jpg)

- 1 Force Sensor
	- [Product Page](https://www.adafruit.com/product/166)
	- Code Samples
		- [FLORA](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/flora_force_sensor)
		- [Gemma](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/gemma_force_sensor)

![Force Sensor](https://github.com/HarvAce/tech-wearables-build-night/blob/master/images/force_sensor.jpg)

- 1 Conductive Fabric
	- [Product Page](https://www.adafruit.com/product/1364)
	- Code Samples
		- [FLORA](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/flora_conductive_fabric)
		- [Gemma](https://github.com/HarvAce/tech-wearables-build-night/tree/master/sketches/gemma_conductive_fabric)

![Conductive Fabric](https://github.com/HarvAce/tech-wearables-build-night/blob/master/images/conductive_fabric.jpg)

### Utilities - 6 types - black
- 1 breadboard
	- [Product Page](https://www.adafruit.com/product/65)
- 9 battery switches - A:7, M:2
	- [Product Page](https://www.adafruit.com/product/783)
- 3 needles x20 in each
	- [Product Page](https://www.adafruit.com/product/615)
- 3 spools thin conductive thread
	- [Product Page](https://www.adafruit.com/product/640)
- 5 spools medium conductive thread
	- [Product Page](https://www.adafruit.com/product/641)
- 1 rechargeable battery
	- [Product Page](https://www.adafruit.com/product/1904)

### Cables - 1 type - yellow
- 53 cable bags x3 in each
	- [Product Page](https://www.adafruit.com/product/1008)

## Sample Projects
NOTE: Suggestion to Google FLORA or Gemma projects for more ideas
- [FLORA Sample Projects](https://learn.adafruit.com/getting-started-with-flora/flora-projects)
- [Neopixel Sample Projects](https://learn.adafruit.com/flora-rgb-smart-pixels/project-ideas)
- [Gemma Firewalker Sneakers](https://learn.adafruit.com/gemma-led-sneakers?view=all)

# Flora Color Sensor sketch

Print out 16 bit RGB values from TCS34725 Color Sensor.  Sketch is targeted for Flora, which has support for Serial out.

You must install an additional library in your Arduino IDE for this sketch.  In Arduino IDE menu navigate to "Sketch->Include Library->Manage Libraries...".  In "Library Manager" focus "Filter your search" field and enter "TCS34725". Select "Adafruit TCS34725", latest version, and click "Install" button.

After uploading sketch, open Serial monitor in Arduino IDE and set baud rate to 9600.  As different colored objects are placed over sensor RGB values will update.

**Hardware**
- [Adafruit Flora](https://www.adafruit.com/product/659)
- [Color Sensor with White Illumination LED (TCS34725)](https://www.adafruit.com/product/1356)

<img src="./flora_color_sensor_print_bb.png?raw=true" width="400" alt="circuit diagram">

#include <CapacitiveSensor.h>

CapacitiveSensor   cs = CapacitiveSensor(9,10);        // 10M resistor between pins 4 & 2, pin 2 is sensor pin, add a wire and or foil if desired
 
void setup()                    
{
   cs.set_CS_AutocaL_Millis(0xFFFFFFFF);
   Serial.begin(9600);
}
 
void loop()                    
{
    long start = millis();
    long total1 =  cs.capacitiveSensor(30);
    
    Serial.println(total1);                  
 
    delay(10);                             // arbitrary delay to limit data to serial port 
}

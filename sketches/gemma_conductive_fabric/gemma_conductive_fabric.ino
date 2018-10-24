#include <CapacitiveSensor.h>

CapacitiveSensor   cs = CapacitiveSensor(0,2);        // 10M resistor between pins 0 & 2, pin 2 is sensor pin, add a wire and or foil if desired
 
void loop()                    
{
    long start = millis();
    long total1 =  cs.capacitiveSensor(30);
    
    //do something with total1 here               
 
    delay(10);                             // arbitrary delay to limit data to serial port 
}

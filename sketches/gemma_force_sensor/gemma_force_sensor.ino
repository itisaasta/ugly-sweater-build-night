int fsrAnalogPin = 1; // FSR is connected to analog 1   
int fsrReading;
 
void loop(void) {
  fsrReading = analogRead(fsrAnalogPin);
  
  // do something with the reading
 
  delay(100);
}

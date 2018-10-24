int fsrAnalogPin = 1; // FSR is connected to analog 1   
int fsrReading;
 
void setup(void) {
  Serial.begin(9600);
}
 
void loop(void) {
  fsrReading = analogRead(fsrAnalogPin);
  Serial.print("Analog reading = ");
  Serial.println(fsrReading);
 
  delay(100);
}

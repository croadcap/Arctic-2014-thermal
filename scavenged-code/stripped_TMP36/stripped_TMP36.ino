// We'll use analog input 0 to measure the temperature sensor's
// signal pin.

const int temperaturePin = 0;
float voltage, degreesC;

void setup() { 
  Serial.begin(9600);
}

void loop() {
    voltage = getVoltage(temperaturePin);
    degreesC = (voltage - 0.5) * 100.0;  
  Serial.print("Temperature: ");
  Serial.println(degreesC);

}

float getVoltage(int pin) {
  return (analogRead(pin) * (5.0 / 1024.0));
}






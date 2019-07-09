int pin_analog_photoresistor = 2;
int io_photoresistor = 0;
int delay_time = 1000;
unsigned long current_time = 0;

int pin_digital_relay = 2;

void setup() {
  pinMode(A2, INPUT); /* Input from analog photoresistor */
  pinMode(2, OUTPUT); /* Output to digital relay */
}

void loop() {
  if(millis() - current_time > delay_time) {
    current_time = millis();
    io_photoresistor = analogRead(pin_analog_photoresistor);
  }
  
  if (io_photoresistor > 400) {
    digitalWrite(pin_digital_relay, HIGH);
    } else {
    digitalWrite(pin_digital_relay, LOW);
    }
}

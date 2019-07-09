int pin_photoresistor = 2;
int io_photoresistor = 0;
int delay_time = 5000;
unsigned long current_time = 0;

void setup() {
  pinMode(A2, INPUT); /* Input from analog photoresistor */
  Serial.begin(9600);
 
}

void loop() {
  
  
  if(millis() - current_time > delay_time) {
    current_time = millis();
    io_photoresistor = analogRead(pin_photoresistor);
    
    if (io_photoresistor > 400) { /* higher value (up to 1023) indicates lower light, lower value (down to 0) indicates more light */
      Serial.println(io_photoresistor, DEC);
    }
  }
}
/*


    if (io_photoresistor > 400) { /* higher value (up to 1023) indicates lower light, lower value (down to 0) indicates more light */
    /* do something here */
    }
    
    */

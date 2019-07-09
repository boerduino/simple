
int pin_digital_relay = 2;

void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}

void loop() {                
     digitalWrite(pin_digital_relay, HIGH);     
}

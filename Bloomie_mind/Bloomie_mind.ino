#define PIN_ANALOG   4
#define PIN_DIGITAL   5

void setup() {
  Serial.begin(115200);
  pinMode(PIN_ANALOG, INPUT);
  pinMode(PIN_DIGITAL, INPUT);
}

void loop() {
  int analogValue = analogRead(PIN_ANALOG);
  int digitalValue = digitalRead(PIN_DIGITAL);
  
  Serial.print("Surowy Analog: ");
  Serial.print(analogValue);
  Serial.print(" | Cyfrowy (0/1): ");
  Serial.println(digitalValue);
  
  delay(500);
}
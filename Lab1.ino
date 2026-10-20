void setup() {
  Serial.begin(9600);
  hello();
}

void loop() {
  Serial.println("Hello World");
  delay(1000);
}

void hello() {
  Serial.println("Phonpawee");
  Serial.println("phonpaweejintajirapan@gmail.com");
  Serial.println("16");
}
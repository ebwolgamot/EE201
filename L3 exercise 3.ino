void setup() {
  // put your setup code here, to run once:
    pinMode(8, INPUT);
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(8) == HIGH) {
      Serial.println("Hello World!");
  } else {
      Serial.println("It's 2023");
  }
}
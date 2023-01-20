// count down from 9 to 0, changing numbers every 1.5 seconds

void setup() {
  // put your setup code here, to run once:
    pinMode(8, OUTPUT); // a
    pinMode(2, OUTPUT); // b
    pinMode(3, OUTPUT); // c
    pinMode(4, OUTPUT); // d
    pinMode(5, OUTPUT); // e
    pinMode(6, OUTPUT); // f
    pinMode(7, OUTPUT); // g
    Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(8, LOW); // 9
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delay(1500);
  digitalWrite(5, LOW); // 8
  delay(1500);
  digitalWrite(8, LOW); // 7
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  delay(1500); 
  digitalWrite(2, HIGH); // 6
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW); 
  delay(1500);
  digitalWrite(2, HIGH); // 5
  digitalWrite(5, HIGH);
  delay(1500);
  digitalWrite(8, HIGH); // 4
  digitalWrite(2, LOW);
  digitalWrite(4, HIGH);
  delay(1500);
  digitalWrite(8, LOW); // 3
  digitalWrite(4, LOW);
  digitalWrite(6, HIGH);
  delay(1500);
  digitalWrite(2, LOW); // 2
  digitalWrite(3, HIGH);
  digitalWrite(5, LOW);
  delay(1500);
  digitalWrite(8, HIGH); // 1
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(7, HIGH);
  delay(1500);
  digitalWrite(8, LOW); // 0
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  delay(1500);
}
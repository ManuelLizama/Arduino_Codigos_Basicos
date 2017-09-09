int rojo = 2;
int am = 3;
int ver = 4;

void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(am, OUTPUT);
  pinMode(ver, OUTPUT);

  digitalWrite(rojo, LOW);
  digitalWrite(am, LOW);
  digitalWrite(ver, LOW);
}

void loop() {
  digitalWrite(ver, HIGH);
  delay(2000);
  digitalWrite(ver, LOW);
  digitalWrite(am, HIGH);
  delay(500);
  digitalWrite(am, LOW);
  digitalWrite(rojo, HIGH);
  delay(2000);
  digitalWrite(rojo, LOW); 
}


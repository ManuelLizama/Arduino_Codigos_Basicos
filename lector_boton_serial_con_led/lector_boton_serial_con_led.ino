int btn =0;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(8, INPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
  delay(2000);
}

void loop() {
  Serial.print("El boton tiene valor ");
  btn = digitalRead(8);
  Serial.println(btn);
  digitalWrite(11, btn);
  delay(500);
}


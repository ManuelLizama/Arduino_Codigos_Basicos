int led = 3; //led señal digital
int pot = 0; //potenciometro señal analogica A0
int brillo;
 
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  //los pins analógicos se declaran como entrada automáticamente
}
 
void loop() {
  brillo = analogRead(pot) / 4; //con valores de 0 a 1023
  Serial.print("brillo: "); Serial.println(brillo);  //COMENTAR, ESTO ES SOLO PARA VER LAS SALIDAS
  analogWrite(led, brillo); //con valores de 0 a 255
}

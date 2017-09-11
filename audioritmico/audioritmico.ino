//Canales a Leer
#define R  0
#define L  1
 
//PINS Izquierdos
#define L1 5
#define L2 6
#define L3 7
 
//PINs Derechos
#define R1 2
#define R2 3
#define R3 4
 
//Umbrales para cada PIN
#define UMBRAL1 10
#define UMBRAL2 15
#define UMBRAL3 20
 
//Variables donde guardamos
//El valor de R y L
int r;
int l;
 
void setup() {
 Serial.begin(9600);
  //Ponemos todos pins del 0 a 6
  //en modo OUTPUT
  for (int i = 2; i < 8; i++)
   pinMode(i, OUTPUT);
 
}
 
void loop() {
 
  //Leemos los canales
 r = analogRead(R);
 l = analogRead(L);
 Serial.println(r);
 Serial.println(l);
 //Encemos los leds que correspondan
 
 if (r > UMBRAL1)
  digitalWrite(R1, HIGH);
 else
  digitalWrite(R1, LOW);
 
 if (r > UMBRAL2)
  digitalWrite(R2, HIGH);
 else
  digitalWrite(R2, LOW);
 
 if (r > UMBRAL3)
  digitalWrite(R3, HIGH);
 else
  digitalWrite(R3, LOW);
 
 if (l > UMBRAL1)
   digitalWrite(L1, HIGH);
 else
   digitalWrite(L1, LOW);
 
 if (l > UMBRAL2)
   digitalWrite(L2, HIGH);
 else
    digitalWrite(L2, LOW);
 
 if (l > UMBRAL3)
   digitalWrite(L3, HIGH);
 else
    digitalWrite(L3, LOW);
 
}

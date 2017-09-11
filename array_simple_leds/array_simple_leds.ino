int matriz[]={2,4,6,8,10};
int timmer =100;
int pot=0;

void setup() {
  for (int i=0;i<5;i++){
      pinMode(matriz[i], OUTPUT);
    }
    Serial.begin(9600);
}

void loop() {
 timmer=analogRead(pot)/5;
 Serial.print("Velocidad: ");
 Serial.println(200-timmer);
  
 for (int i=0;i<5;i++){
      digitalWrite(matriz[i], HIGH);
      delay(timmer);
      digitalWrite(matriz[i], LOW);
    }
 for (int i=4;i>0;i--){
      digitalWrite(matriz[i], HIGH);
      delay(timmer);
      digitalWrite(matriz[i], LOW);
    }
}

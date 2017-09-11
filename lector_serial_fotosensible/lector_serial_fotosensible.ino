int foto =0;
int valorfoto=0;
int led_baja=2;
int led_media=3;
int led_alta=4;
void setup() {
  pinMode(led_baja, OUTPUT);
  pinMode(led_media, OUTPUT);
  pinMode(led_alta, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(led_baja, LOW);
  digitalWrite(led_media, LOW);
  digitalWrite(led_alta, LOW);
  valorfoto= analogRead(foto);
  Serial.print("Cantidad luz: ");
  Serial.println(valorfoto);
  if(valorfoto<200){
    digitalWrite(led_baja, HIGH);
    }
   if(valorfoto>=200 and valorfoto<400){
    digitalWrite(led_media, HIGH);
    }
   if (valorfoto>=400){
    digitalWrite(led_alta, HIGH);
    }
  delay(20);

  
}

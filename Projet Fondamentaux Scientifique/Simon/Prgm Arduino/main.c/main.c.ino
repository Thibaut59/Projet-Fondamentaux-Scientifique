#include "cardio.h"

void setup() {
  Serial.begin(9600);
  
}


void loop() {
 
int analogPin=0;
int valeur = analogRead(analogPin); //On implémente les valeurs reçu part le pin A0 dans la variable valeur
float tension=valeur * (5.0/1023.0); //opération pour changer l'échelle (avoir une tension lisible)


}

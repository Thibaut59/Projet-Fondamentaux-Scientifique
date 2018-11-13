int battement=0;
int temps=60000;

void setup() {
  Serial.begin(9600);
  
}

void loop() {
  
int valeur = analogRead(A0); //On implémente les valeurs reçu part le pin A0 dans la variable valeur
float tension=valeur * (5.0/1023.0); //opération pour changer l'échelle (avoir une tension lisible)



do
{
  if (tension>1.5)
  {
    Serial.println(tension); //on écrit ce que reçoit A0 en Volt
    battement=battement+1;
    Serial.println(battement);

  }
}
while (millis()<temps);

Serial.println("Le BPM est de :");
Serial.println(battement);

}

int battement=0; //le nombre de battement au début du programme doit être de 0
int bpm;

void setup() {
  Serial.begin(9600);
  int i =random(750,1000); //i est le temps entre chaque battement, il doit rester constant pendant chaque minutes
  
  for (; millis()<60000;) // pour une minute :
  {
    battement=battement+1; 
    delay(i); // on ajoute un battement tout les i temps
    
    Serial.print("Nombre de Battements=");
    Serial.print(battement); //sert à observer l'augmentation du nombre de battements
    Serial.print(";");
    Serial.print("Temps passe=");
    Serial.println(millis()); //sert à voir le temps passé depuis le début du circuit
  }
   
  Serial.print("Pouls =");
  Serial.println(battement); // on affiche le BPM aprés une minute
 
}


void loop() {
   
}
  

// Déclaration des valeurs
int battements;
int temps;

void setup() {
  Serial.begin(9600);
for (; millis()<60000;)// Pour un temps inférieur à 60milliseconde soit 60sec alors on fait la boucle
{
  temps = millis();
  Serial.print(temps);// affiche le temps en milisenconde
  Serial.print(";"); //permet d'écrit la valeurs en dessous dans une autre colonne
    battements = random(2); // on demande d'envoye un battements aléatoire soit il y a battements 1 ou soit il n'y en a pas 0
  Serial.println(battements);// affiche le batements 
  
}
}

void loop() {

  
}

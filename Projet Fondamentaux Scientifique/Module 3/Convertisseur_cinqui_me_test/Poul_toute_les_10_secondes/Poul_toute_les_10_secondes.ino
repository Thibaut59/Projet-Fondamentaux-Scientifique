int analogPin=0;
bool passage;

float battement;
float bpm_10_sec;

float tempsPasse = 0;

float timeTemps = 0;

void setup() {
  Serial.begin(9600);
  
}


void loop() {
  
int valeur = analogRead(analogPin); //On implémente les valeurs reçu part le pin A0 dans la variable valeur
float tension=valeur * (5.0/1023.0); //opération pour changer l'échelle (avoir une tension lisible)



 if (tension>=1.5)  //Si la pin A0 récupére une tension supérieur à 1.5 V alors...
 {

  if (passage == false) //b sert à ce que battement et battement_moyen ne s'incrémente qu'une fois quand tension >= 1.5
  {
    
    battement++;  //battement toutes les 10 secondes
    passage=true;

    
    delay(20);

  }      
 }
 else
 {
  passage=false;  //les battements peuvent de nuveau s'incrémenter
  delay(20);
 }

if(millis() >= (timeTemps +10000))  //dés que 10 secondes se passent...
{
  timeTemps = millis(); //on remplace timeTemps par le temps du programme, ce qui permet de recommencer cette boucle toute les 1 secondes
 
  //Serial.print("BPM au bout de ");
  Serial.print((tempsPasse/1000)+10);
  //Serial.print("seconde");
  Serial.print(";");
  bpm_10_sec=(battement/10)*60; //on calcul les BPM pour les 10 derniéres secondes
  Serial.println(bpm_10_sec);
  battement=0;  //on réinitialise battement pour reprendre les nouveaux battements des 10 prochaines secondes
  
  
  
}

if(millis() >= tempsPasse + 10000) //condition qui permet d'afficher le temps toutes les 2 secondes
{
 tempsPasse = millis();
 
}

}

#include "cardio.h"


int b;
float bpm_10_sec;
float bpm_moyen;
int seconde=10;

float tempsPasse = 0;

float timeTemps = 0;



void battements (tension, b)
{
  float battement;
  float battement_moyen;
  
  if (tension>=1.50)
 {

    if (b == 0)
    {
    
      battement++;
      battement_moyen++;
      b=1;
      Serial.println("boum");
      delay(20);

    }      
 }
 else
 {
  b=0;
  delay(20);
  
 }
}


void ecriture_bpm(battement, battement_moyen)
{
  if(millis() >= (timeTemps +10000))
  {
    timeTemps = millis();
 
    Serial.print("BPM au bout de 10 secondes: ");
    bpm_10_sec=(battement/10)*60;
    Serial.println(bpm_10_sec);
    battement=0;

    Serial.print("BPM moyen: ");
    bpm_moyen=(battement_moyen/seconde)*60;
    Serial.println(bpm_moyen);
  
  seconde+=10;
  
  }
}

void temps (tempsPasse)
{
  if(millis() >= tempsPasse + 2000)
{
    tempsPasse = millis();
  Serial.print("temps : ");
  Serial.println(millis());
}
}

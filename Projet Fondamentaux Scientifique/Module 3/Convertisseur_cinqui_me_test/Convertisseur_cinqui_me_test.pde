//From Arduino to Processing to Txt or cvs etc.
//import
import processing.serial.*;
PrintWriter output;//autorise les charactères à s'afficher dans un fichier externe (dans battement.csv)
Serial udSerial;  //serial est un objet qui sert à recevoir ou envoyer des données entre l'arduino et l'ordinateur

void setup() {
  udSerial = new Serial(this, Serial.list()[0], 9600);  //ouvre le port que l'on utilise à un débit de 9600 bits/s
  File MyFile = new File("C:/Users/thiba/Desktop/Battements"); 
  MyFile.delete();
  // créer un fichier CSV qui s'appel Battements.csv
  output = createWriter ("Battements.csv");
  
  
}

  void draw() {
    if (udSerial.available() > 0) {// Si le port série est ouvert prend le nombres de bytes disponible de la variable udSerial
      //retourne toutes les données de SenVal en string
      String SenVal = udSerial.readString();
      if (SenVal != null) {
        //print dans le doc battements les valeurs
        output.print(SenVal);
       
      }
    }
  }

  void keyPressed(){ // Fonction qui ferme le fichier ainsi que l'application quand une touche est pressée
    //assure que toutes les données restantes sont écrites dans le fichier avant sa fermeture.
    output.flush(); 
    //ferme le fichier
    output.close();
    //arrete le programme
    exit(); 
  }

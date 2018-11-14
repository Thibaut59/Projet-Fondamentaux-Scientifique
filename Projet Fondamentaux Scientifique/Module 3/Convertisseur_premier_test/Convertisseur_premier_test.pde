//From Arduino to Processing to Txt or cvs etc.
//import
import processing.serial.*;
//declare
PrintWriter output;
Serial udSerial;

void setup() {
  udSerial = new Serial(this, Serial.list()[0], 9600);
  // créer un fichier CSV qui s'appel Battements.csv
  output = createWriter ("Battements.csv");
  
  
}

  void draw() {
    if (udSerial.available() > 0) {
      String SenVal = udSerial.readString();
      if (SenVal != null) {
        output.println(SenVal);
       delay(1000);
       
      }
    }
  }

  void keyPressed(){
    output.flush();
    output.close();
    exit(); 
  }

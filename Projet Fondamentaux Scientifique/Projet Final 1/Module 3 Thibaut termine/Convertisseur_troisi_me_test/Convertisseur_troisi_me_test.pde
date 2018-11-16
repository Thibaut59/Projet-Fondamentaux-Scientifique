//From Arduino to Processing to Txt or cvs etc.
//import
import processing.serial.*;
//declare
PrintWriter output;
Serial udSerial;

void setup() {
  udSerial = new Serial(this, Serial.list()[0], 9600);
  File MyFile = new File("C:/Users/thiba/Desktop/Battements");
  MyFile.delete();
  // créer un fichier CSV qui s'appel Battements.csv
  output = createWriter ("Battements.csv");
  
  
}

  void draw() {
    if (udSerial.available() > 0) {
      String SenVal = udSerial.readString();
      if (SenVal != null) {
        output.print(SenVal);
       
      }
    }
  }

  void keyPressed(){
    output.flush();
    output.close();
    exit(); 
  }

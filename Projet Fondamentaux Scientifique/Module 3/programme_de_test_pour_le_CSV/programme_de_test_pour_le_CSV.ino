// 
int battements;
int temps;

void setup() {
  Serial.begin(9600);
for (; millis()<10000;)
{

  Serial.print(millis());
  Serial.print(";");
  battements = random(2);
  Serial.println(battements);
  
}
}

void loop() {

  
}

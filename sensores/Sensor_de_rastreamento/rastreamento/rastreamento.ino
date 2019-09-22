/************************************************************
* Laboratório IoT Eletrotécnica - CEFET-MG
* Código de exemplo de uso de sensores
* Prof. Elpaminondas Lage
* 2019
************************************************************/

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  Serial.println(digitalRead(2)); // print the data from the sensor
  delay(500);
}

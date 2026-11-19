// C++ code
//
unsigned int napon = 3750;
unsigned int kapacitet = 2600;
unsigned long ukupna_energija;
float napon_V;
float kapacitet_Ah;

void setup()
{
  Serial.begin(9600);
  ukupna_energija = (unsigned long)napon * kapacitet;
  
  napon_V = (float)napon / 1000.0 ;
  kapacitet_Ah = (float)kapacitet / 1000.0 ;
  
  Serial.print("Ukupna energija:");
  Serial.println(ukupna_energija);
  
  Serial.print("Napon u V:");
  Serial.println(napon_V);
  
  Serial.print("Kapacitet u Ah:");
  Serial.println(kapacitet_Ah);
  
  
  
}

void loop()
{
  
}

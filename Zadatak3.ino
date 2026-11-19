//zadatak3
unsigned int adc = 612;
byte postotak;
unsigned int napon_mV;
byte donjiBajt;



void setup()
{
  Serial.begin(9600);
  postotak = (adc * 100UL) / 1023 ;
  unsigned int napon_mV = (adc * 5000UL) / 1023;
  
  
  Serial.print("Napon u mV je: ");
  Serial.println(napon_mV);
  
  Serial.print("Postotak je: ");
  Serial.println(postotak);
  
  byte donjiBajt = adc;
  
  Serial.print("Decimalni bytes: ");
  Serial.println(donjiBajt);
  
  Serial.print("Heksadekatski bytes: ");
  Serial.println(donjiBajt, HEX);
  
  Serial.print("Binarni bytes: ");
  Serial.println(donjiBajt, BIN);
  
  Serial.print("Oktalni bytes: ");
  Serial.println(donjiBajt, OCT);
  
    
  
}

void loop()
{
  
}

//
unsigned long otpornik = 100000;
float kapacitet = 47e-6;
unsigned long ukupna_energija;
float tau;
float vrijemepunjenja;

void setup()
{
  Serial.begin(9600);
  tau = otpornik * kapacitet;
  vrijemepunjenja = 5 * tau;
  
   
  
  Serial.print("Tau je: ");
  Serial.println(tau);
  Serial.print("Vrijeme punjenja je: ");
  Serial.println(vrijemepunjenja);
  
    
  
}

void loop()
{
  
}

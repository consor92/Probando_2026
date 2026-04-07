#define Led_B 5
#define Led_G 6
#define Led_R 3
#define LedV  2
#define Buzz  8
#define RGB_G 11
#define RGB_B 10
#define RGB_R 9

void setup()
{
  pinMode( LedV  , OUTPUT );
  pinMode( Led_R , OUTPUT );
  pinMode( Led_B , OUTPUT );
  pinMode( Led_G , OUTPUT );
  pinMode( Buzz  , OUTPUT );
  pinMode( RGB_G , OUTPUT);
  pinMode( RGB_B , OUTPUT);
  pinMode( RGB_R , OUTPUT);
}

void loop()
{
  /*
  digitalWrite( LedV , HIGH  );  //HIGH => 1 => V/true  (5v/+)
  delay(20);	//miliSegundos-Entero	 //LOW  => 0 => F/false (GND/0v/-)
  digitalWrite( LedV , LOW );
  delay(20);
  
  R + G     => amarillo
  R + B		=> magenta	
  B + G		=> cian
  R + G + B => blanco
  
  R > G => naranja
  G > R => verde limon
  R > B => Violeta
  B > R => fucsia
  G > B => Verde azuladado
  B > G => Celeste
  R - G - B  => tonos de grises
  */
  digitalWrite( Led_R , HIGH ); //R
  digitalWrite( Led_B , LOW ); //B
  digitalWrite( Led_G , HIGH ); //G
  
  digitalWrite( Buzz , HIGH );
  delay(500);
  digitalWrite( Buzz , LOW);
  delay(500);
  
  analogWrite( RGB_R , 255 );  //0-255
  //analogWrite( RGB_G , 100 );
  analogWrite( RGB_B , 100 );
}




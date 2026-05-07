#include <LiquidCrystal.h>
#define HUM  A0
#define FLEX A1
#define SW   7
#define PIR  2
#define TRIG 4
#define ECHO 3
              //  rs  E db4 db5 db6 db7 
              //   5  6  8   9   10  11
// LiquidCrystal (rs, e, d4, d5, d6, d7)
LiquidCrystal LCD(5,6,8,9,10,11);

void setup()
{
  pinMode( HUM  , INPUT );
  pinMode( SW   , INPUT );
  pinMode( FLEX , INPUT );
  pinMode( PIR  , INPUT );
  pinMode( TRIG , OUTPUT );
  pinMode( ECHO , INPUT );
  Serial.begin(9600);
  //(columnas , filas)
  LCD.begin(16,2);
}

void loop()
{	
 	delay(100);
  	LCD.clear();
  	
  
	bool mov = digitalRead(PIR);// 0-1 low-high
  	digitalWrite(TRIG,LOW);
  	delayMicroseconds(2);//1000ms->1ms
  	digitalWrite(TRIG,HIGH);
  	delayMicroseconds(10);
  	digitalWrite(TRIG,LOW);
  
    float time = pulseIn(ECHO,HIGH);
  	float dis  = time / 57.6;
  			//caracter,renglon
  	LCD.setCursor(0,0);
	LCD.print("Intrusooo: ");
    //if(mov){"si"} else {"no"}
    LCD.print( (mov)? "Si" : "No" );
  
  	LCD.setCursor(0,1);
  	LCD.print("Dist: ");
    LCD.print(dis);
	LCD.print("cm");
}


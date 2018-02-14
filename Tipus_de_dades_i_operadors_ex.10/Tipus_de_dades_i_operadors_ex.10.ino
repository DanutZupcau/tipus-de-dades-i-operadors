/**************************************************************
**                                                           **
**                    TÍTOL: Math is fun                     **
**                 Tipis de dades i operadors                **
**                                                           **
**  NOM: Danut Zupcau                   DATA: 22/01/2018     **
**************************************************************/
//******************* INCLUDE  *************************


//******************* VARIABLE *************************
int a = 3;
int b = 2;
int d;

//******************* SETUP ****************************

void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);      // set up Serial library at 9600 bps

  Serial.println("Here is division: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);

  d = a / b;
 
  Serial.print("a / b = ");
  Serial.println(d);
}

//******************* LOOP *****************************

void loop(){
  
}

//******************* FUNCIONS **************************

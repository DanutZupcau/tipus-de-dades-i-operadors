/******************************************************************
**                                                               **
**                    TÍTOL: Math Is Fun                         **
**                                                               **
**                                                               **
**  NOM: Danut Zupcau                   DATA: 15/01/2018         **
*******************************************************************/
//******************* INCLUDE  *************************


//******************* VARIABLE *************************
int a = 5, b = 4, h = 0;

//******************* SETUP ****************************

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  
  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);

  Serial.print("h = ");
  Serial.println(sqrt (pow(a, 2) + pow (b, 2)));


}


//******************* LOOP *****************************

void loop()  // we need this to be here even though its empty
{
}

//******************* FUNCIONS **************************

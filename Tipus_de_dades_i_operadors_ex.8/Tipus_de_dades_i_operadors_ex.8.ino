/**************************************************************
**                                                           **
**                    TÍTOL: Math is fun                     **
**                                                           **
**                                                           **
**  NOM: Danut Zupcau                   DATA: 22/01/2018     **
**************************************************************/
//******************* INCLUDE  *************************


//******************* VARIABLE *************************
int test = 32767;

//******************* SETUP ****************************

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     //set up Serial library at 9600 bps
  Serial.print("Test value is: ");
  Serial.println(test);

  test = test + 1;
 
  Serial.print("Now it is: ");
  Serial.println(test);
}


//******************* LOOP *****************************

void loop()   // we need this to be here even though its empty
{
}

//******************* FUNCIONS **************************

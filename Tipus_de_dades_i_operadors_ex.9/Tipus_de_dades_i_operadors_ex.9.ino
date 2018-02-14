/**************************************************************
**                                                           **
**                    TÍTOL: Math is fun                     **
**                Tipus de dades i operadors                 **
**                                                           **
**  NOM: Danut Zupcau                   DATA: 22/01/2018     **
**************************************************************/
//******************* INCLUDE  *************************


//******************* VARIABLE *************************
long drive_gb = 100;
long drive_mb, drive_kb, real_drive_mb, real_drive_kb, missing_drive_kb;

//******************* SETUP ****************************

void setup(){
  Serial.begin(9600);
  Serial.print("Your HD is ");
  Serial.print(drive_gb);
  Serial.println(" GB large.");
  Serial.print("In theory, it cant store ");
  drive_mb = drive_gb * 1024;
  Serial.print(drive_mb);
  Serial.print(" Megabytes, ");
  drive_kb = drive_mb * 1024;
  Serial.print(drive_kb);
  Serial.println(" Kilobytes.");
  Serial.print("But it really only stores ");
  real_drive_mb = drive_gb * 1000;
  Serial.print(real_drive_mb);
  Serial.print(" Megabytes, ");
  real_drive_kb = real_drive_mb * 1000;
  Serial.print(real_drive_kb);
  Serial.println(" Kilobytes.");
  Serial.print("You are missing ");
  missing_drive_kb = drive_kb - real_drive_kb;
  Serial.print(missing_drive_kb);
  Serial.print(" Kilobytes");
}

//******************* LOOP *****************************

void loop(){
  
}

//******************* FUNCIONS **************************

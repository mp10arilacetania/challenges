/**********************************************************
**                                                       **
**             Serial Challenge I                        **
**                                                       **
**********************************************************/

//******************** Includes ***************************


//****************** Variables ****************************
int a = 0;


//****************** Setup ********************************
void setup() {
  Serial.begin(9600);
}

//***************** Loop **********************************
void loop() {
  a = a + 1;
  if ( a < 5 ) {
    Serial.print(a);
    Serial.print(" ");
  }
  if ( a == 6 ) {
    Serial.println(a);
  }
  if ( a > 6 ) {
    Serial.print(a);
    Serial.print(" ");
    Serial.println();
  }
  //a = a + 1;
  if ( a == 9 ) {
    a = 0;    
  }
}

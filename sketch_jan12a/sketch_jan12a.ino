

#include <SoftwareSerial.h>
SoftwareSerial mySerial(10, 11); //

#define Lamp1 2
#define Lamp2 3
#define Lamp3 4
#define Lamp4 5
#define Lamp5 6
#define Lamp6 7
#define Lamp7 8
#define Lamp8 9


#define ON 1
#define OFF 0
char val;
String statusLamp1,statusLamp2,statusLamp3,statusLamp4,statusLamp5,statusLamp6,statusLamp7,statusLamp8;

void setup() {
  pinMode(Lamp1,OUTPUT);digitalWrite (Lamp1,OFF);
  pinMode(Lamp2,OUTPUT);digitalWrite (Lamp2,OFF);
  pinMode(Lamp3,OUTPUT);digitalWrite (Lamp3,OFF);
  pinMode(Lamp4,OUTPUT);digitalWrite (Lamp4,OFF);
  pinMode(Lamp5,OUTPUT);digitalWrite (Lamp5,OFF);
  pinMode(Lamp6,OUTPUT);digitalWrite (Lamp6,OFF);
  pinMode(Lamp7,OUTPUT);digitalWrite (Lamp7,OFF);
  pinMode(Lamp8,OUTPUT);digitalWrite (Lamp8,OFF);
  mySerial.begin(9600);
  Serial.begin(9600);
}

void loop() {

if( mySerial.available() >0 ) {
    val = mySerial.read();
    Serial.println(val); 
}

  if( val == '1' ) {
    digitalWrite(Lamp1,ON); statusLamp1="1"; }
  else if( val == '2' ) {
    digitalWrite(Lamp2,ON); statusLamp2="2"; }
  else if( val == '3' ) {
    digitalWrite(Lamp3,ON); statusLamp3="3"; }
  else if( val == '4' ) {
    digitalWrite(Lamp4,ON); statusLamp4="4"; }
  else if( val == '5' ) {
    digitalWrite(Lamp5,ON); statusLamp5="5"; }
  else if( val == '6' ) {
    digitalWrite(Lamp6,ON); statusLamp6="6"; }
  else if( val == '7' ) {
    digitalWrite(Lamp7,ON); statusLamp7="7"; }
  else if( val == '8' ) {
    digitalWrite(Lamp8,ON); statusLamp8="8"; }
  else if( val == '9' ) {
    digitalWrite(Lamp1,ON); statusLamp1="1"; 
    digitalWrite(Lamp2,ON); statusLamp2="2"; 
    digitalWrite(Lamp3,ON); statusLamp3="3"; 
    digitalWrite(Lamp4,ON); statusLamp4="4"; 
    digitalWrite(Lamp5,ON); statusLamp5="5"; 
    digitalWrite(Lamp6,ON); statusLamp6="6"; 
    digitalWrite(Lamp7,ON); statusLamp7="7"; 
    digitalWrite(Lamp8,ON); statusLamp8="8"; 
 }
 
  else if( val == 'A' ) {
    digitalWrite(Lamp1,OFF); statusLamp1="A"; }
  else if( val == 'B' ) {
    digitalWrite(Lamp2,OFF); statusLamp2="B"; }
  else if( val == 'C' ) {
    digitalWrite(Lamp3,OFF); statusLamp3="C"; }
  else if( val == 'D' ) {
    digitalWrite(Lamp4,OFF); statusLamp4="D"; }
  else if( val == 'E' ) {
    digitalWrite(Lamp5,OFF); statusLamp5="E"; }
  else if( val == 'F' ) {
    digitalWrite(Lamp6,OFF); statusLamp6="F"; }
  else if( val == 'G' ) {
    digitalWrite(Lamp7,OFF); statusLamp7="G"; }
  else if( val == 'H' ) {
    digitalWrite(Lamp8,OFF); statusLamp8="H"; }
  else if( val == 'I' ) {
    digitalWrite(Lamp1,OFF); statusLamp1="A";
    digitalWrite(Lamp2,OFF); statusLamp2="B";
    digitalWrite(Lamp3,OFF); statusLamp3="C";
    digitalWrite(Lamp4,OFF); statusLamp4="D";
    digitalWrite(Lamp5,OFF); statusLamp5="E";
    digitalWrite(Lamp6,OFF); statusLamp6="F";
    digitalWrite(Lamp7,OFF); statusLamp7="G";
    digitalWrite(Lamp8,OFF); statusLamp8="H";
 }
  
 else if( val == 'S' ) {
    
    delay(500);    
    mySerial.println(statusLamp1+statusLamp2+statusLamp3+statusLamp4+statusLamp5+statusLamp6+statusLamp7+statusLamp8+"J"); //delay(500);
    val=' ';
 }
}

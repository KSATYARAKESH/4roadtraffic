
// 4 road traffic l[ght
int R1 =2;
int Y1 =3;
int G1 =4;
int R2 =5;
int Y2 =6;
int G2 =7;
int R3 =8;
int Y3 =9;
int G3 =10;
int R4 =11;
int Y4 =12;
int G4 =13;


void setup() {
  // put your setup code here, to run once:
  pinMode(R1,OUTPUT);
  pinMode(Y1,OUTPUT);
  pinMode(G1,OUTPUT);
  pinMode(R2,OUTPUT);
  pinMode(Y2,OUTPUT);
  pinMode(G2,OUTPUT);
  pinMode(R3,OUTPUT);
  pinMode(Y3,OUTPUT);
  pinMode(G3,OUTPUT);  
  pinMode(R4,OUTPUT);
  pinMode(Y4,OUTPUT);
  pinMode(G4,OUTPUT);
Serial.begin(9600);
  }

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(R2,HIGH);
digitalWrite(R3,HIGH);
digitalWrite(R4,HIGH);
digitalWrite(G1,HIGH);
digitalWrite(R1,LOW);
delay(7000);
  digitalWrite(G1,LOW);
  delay(1000);
  digitalWrite(Y1,HIGH);
  delay(2000);
   

digitalWrite(R1,HIGH);
digitalWrite(Y1,LOW);
delay(1000);
 
  
digitalWrite(G2,HIGH);
 digitalWrite(R2,LOW);
delay(7000);
digitalWrite(G2,LOW);
delay(1000);
 digitalWrite(Y2,HIGH);
 delay(2000);

digitalWrite(R3,HIGH);
digitalWrite(R4,HIGH);
delay(3000);
digitalWrite(Y2,LOW);
delay(1000);
digitalWrite(R2,HIGH);

/////////////////////////
digitalWrite(G3,HIGH);
digitalWrite(R3,LOW);
delay(7000);
digitalWrite(G3,LOW);
delay(1000);
digitalWrite(Y3,HIGH);
delay(2000);

digitalWrite(R4,HIGH);
delay(3000);
digitalWrite(Y3,LOW);
delay(1000);
digitalWrite(R3,HIGH);
//////////////////////////

digitalWrite(G4,HIGH);
digitalWrite(R4,LOW);
delay(7000);
digitalWrite(G4,LOW);
delay(1000);
digitalWrite(Y4,HIGH);
delay(2000);

digitalWrite(Y4,LOW);
delay(1000);
digitalWrite(R4,HIGH);

}

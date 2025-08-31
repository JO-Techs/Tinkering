int red1=13;
int red2=4;
int red3=7;
int red4=10;
int yel1=2;
int yel2=5;
int yel3=8;
int yel4=11;
int grn1=3;
int grn2=6;
int grn3=9;
int grn4=12;

void setup(){
  for (int i=2;i<=13;i++){
    pinMode(i,OUTPUT);
  }
}

void loop(){
  
  digitalWrite(grn1,HIGH);digitalWrite(red2,HIGH);
  digitalWrite(red3,HIGH);digitalWrite(red4,HIGH);
  delay(5000);
  digitalWrite(grn1,LOW);digitalWrite(yel1,HIGH);
  delay(2000);
  
  
  digitalWrite(yel1,LOW);digitalWrite(red1,HIGH);
  digitalWrite(grn2,HIGH);digitalWrite(red2,LOW);
  delay(5000);
  digitalWrite(grn2,LOW);digitalWrite(yel2,HIGH);
  delay(2000);
  
  digitalWrite(yel2,LOW);digitalWrite(red2,HIGH);
  digitalWrite(grn3,HIGH);digitalWrite(red3,LOW);
  delay(5000);
  digitalWrite(grn3,LOW);digitalWrite(yel3,HIGH);
  delay(2000);
  
  digitalWrite(yel3,LOW);digitalWrite(red3,HIGH);
  digitalWrite(grn4,HIGH);digitalWrite(red4,LOW);
  delay(5000);
  digitalWrite(grn4,LOW);digitalWrite(yel4,HIGH);
  delay(2000);
  
  digitalWrite(yel4,LOW);digitalWrite(red1,LOW);
}

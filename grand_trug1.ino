
int ledpin=5;
int buttonpin=6;
int buttonstate=0;

void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
pinMode(buttonpin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
buttonstate=digitalRead(buttonpin);
if(buttonstate==HIGH){
  digitalWrite(ledpin,HIGH);}
  else{
    digitalWrite(ledpin,LOW);}
}
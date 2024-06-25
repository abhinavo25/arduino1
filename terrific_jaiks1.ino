int ledpin=5;
int ledpin1=6;
int ledpin2=7;

void setup() {
  // put your setup code here, to run once:
pinMode(ledpin,OUTPUT);
pinMode(ledpin1,OUTPUT);
pinMode(ledpin2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(ledpin,HIGH);
delay(1000);
  digitalWrite(ledpin,LOW);
delay(1000);
digitalWrite(ledpin1,HIGH);
delay(1000);
  digitalWrite(ledpin1,LOW);
delay(1000);
digitalWrite(ledpin2,HIGH);
delay(1000);
  digitalWrite(ledpin2,HIGH);
delay(1000);
}

char input='L';
void setup() {
  Serial.begin(9600);
  // set the digital pin as output:

  pinMode(9, OUTPUT);
}

void loop() {

    input=Serial.read();
    if(input =='H') digitalWrite(9,HIGH);
    else if(input == 'L') digitalWrite(9,LOW);
  }

void beep(){
  digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(9,LOW);
  delay(1000);
}


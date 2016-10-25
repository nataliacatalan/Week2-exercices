int ledON=12;
int led2 =11;
int button = 13;

void setup() {
  pinMode(ledON,OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (button, INPUT);
  
}

void loop() {

  digitalRead(button);
  
  if (button==HIGH) {

          digitalWrite(ledON,HIGH);
          delay (1000);
          digitalWrite(led2,HIGH);
          delay (1000);
          digitalWrite(ledON,LOW);
          delay (1000);
          digitalWrite(led2,LOW);
          delay(1000);

  }

   else {

          digitalWrite(ledON,HIGH);
          delay (1000);
          digitalWrite(ledON,LOW);
          delay (1000);
    
   }
 
}

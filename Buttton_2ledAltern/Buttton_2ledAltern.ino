int led1 = 13;
int led2 = 12;
int button = 11;

void setup() {

  pinMode(led1,OUTPUT);
  pinMode (led2,OUTPUT);
  pinMode (button,INPUT);

}

void loop() {

 digitalRead(button);

 while(button == HIGH){

      digitalWrite(led1,HIGH);
      delay(1000);
      digitalWrite(led1,LOW);
      digitalWrite(led2,HIGH);
      delay(1000);
      digitalWrite(led2,LOW);

    }
  while(button == LOW){

       digitalWrite(led1,LOW);
       digitalWrite(led2,LOW);

 }

}
  


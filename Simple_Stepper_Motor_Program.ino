const int stepPin = 2;
const int dirPin = 5;
//int randNum = 0;

void setup() {
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  Serial.begin(19200);
}

void loop() { 
  static int v = 0;
  if (Serial.available()){
    char ch = Serial.read();
    switch(ch) {
      case '0'...'9':
        v = v * 10 + ch - '0';
        break;
      case 'x':

      static int num = 0;
      num = map(v,1, 180, 200, 500); 
      
      digitalWrite(dirPin, HIGH);
      for(int x = 0; x < num; x++){
        digitalWrite(stepPin, HIGH);
        delayMicroseconds(1000);
        digitalWrite(stepPin, LOW);
        delayMicroseconds(1000);
      }
      v = 0;

  if (Serial.available()){
    char ch = Serial.read();
    switch(ch) {
      case '0'...'9':
        v = v * 10 + ch - '0';
        break;
      case 'x':

      static int number = 0;
      number = map(v,1, 180, 200, 500);
      if (number > num){
        number = (  
      }
      
      
      v = 0;
      num = 0;
      
    }
   }
  }
 }
}

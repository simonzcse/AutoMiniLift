// digital pin 12(D6) has a sensorPin attached to it. Give it a name:
const int sensorPin = 12;
//const int sensorPin2 = 13;
//const int enaPin = 13;
const int btnPin = 13;
const int pulPin = 15;
const int dirPin = 14;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the sensor's pin an input:
  pinMode(sensorPin, INPUT);
  //pinMode(sensorPin2, INPUT);

  pinMode(btnPin, INPUT);
  
// make the ena's pin an output:
  //pinMode(enaPin, OUTPUT);

// make the pul's pin an output:
  pinMode(pulPin, OUTPUT);

// make the dir's pin an output:
  pinMode(dirPin, OUTPUT);


  digitalWrite(pulPin, LOW);//forward or backward
}

// the loop routine runs over and over again forever:
  void loop() {
  if(digitalRead(btnPin) == HIGH){
          digitalWrite(pulPin, HIGH);
    }
  else if(digitalRead(btnPin) == LOW){
          digitalWrite(pulPin, LOW);
     }

  if(digitalRead(sensorPin) == HIGH){
    digitalWrite(dirPin, LOW);
    digitalWrite(dirPin, HIGH);
    delayMicroseconds(10);//speed is inversely proporitonal to this value
  }
  else if(digitalRead(sensorPin) == LOW){
    digitalWrite(dirPin, LOW);
    digitalWrite(dirPin, LOW);
  }  
}

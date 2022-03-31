// digital pin 12(D6) has a sensorPin attached to it. Give it a name:
const int sensorPin = 12;
//const int sensorPin2 = 13;
//const int enaPin = 13;
const int buttonPin = 13;//to trigger to change direction
const int pulPin = 15;
const int dirPin = 14;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the sensor's pin an input:
  pinMode(sensorPin, INPUT);
  //pinMode(sensorPin2, INPUT);
  
// make the ena's pin an output:
//pinMode(enaPin, OUTPUT);

// initialize the pushbutton pin as an input: 
  pinMode(buttonPin, INPUT);

// make the pul's pin an output:
  pinMode(pulPin, OUTPUT);

// make the dir's pin an output:
  pinMode(dirPin, OUTPUT);


digitalWrite(pulPin, LOW);//forward or backward
digitalWrite(dirPin, LOW);//open or close
//digitalWrite(enaPin, LOW);//open or close
}

// the loop routine runs over and over again forever:
void loop() {
  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (digitalRead(buttonPin) == HIGH) {
    // backward?:
    digitalWrite(pulPin, HIGH);
  } else {
    // forward?:
    digitalWrite(pulPin, LOW);
  }

// check if the human is detected. If it is, the sensorPin status is HIGH:
  if (digitalRead(sensorPin) == HIGH) {
    // on:
    digitalWrite(dirPin, HIGH);
  } else {
    // off:
    digitalWrite(dirPin, LOW);
  }
}

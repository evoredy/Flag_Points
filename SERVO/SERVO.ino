/*

 
 */
const int servo1 = 9;// Analog output pin that the SERVO SIGNAL WIRE is attached to
const int servo2 = 10;//Analog output pin that the SERVO SIGNAL WIRE is attached to
const int button1Pin = 2;
const int button2Pin = 3;
//int prevButton1State;
//int prevButton2State;
//int centerState = 100;
//int button1State = 0;

void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  digitalWrite(button1Pin, LOW);
  digitalWrite(button2Pin, LOW);
  //analogWrite(analogOutPin, 85);
  
}

void loop() {          
  int button1State = digitalRead(button1Pin);
  int button2State = digitalRead(button2Pin);  
  
  if (button1State == HIGH){
  analogWrite(servo1, 150);
  analogWrite(servo2, 1);
  //prevButton1State = button1State;
  }
  else if (button2State == HIGH){
  analogWrite(servo1, 1);
  analogWrite(servo2, 200);
  //prevButton2State = button2State;
  }
  else{
   //analogWrite(analogOutPin, 100);
   //prevButton1State = button1State;
   //prevButton2State = button2State;
}
  
    // print the results to the serial monitor:
Serial.print("button1 = " );                       
Serial.println(button1State);      
Serial.print("\t button2 = ");      
Serial.println(button2State);   

  // wait 2 milliseconds before the next loop
  // for the analog-to-digital converter to settle
  // after the last reading:
  delay(25);                     
}

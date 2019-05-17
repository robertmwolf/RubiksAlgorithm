
/*  
 *  Made by Jacob Dickson using code from Dejan Nedelkovski, www.HowToMechatronics.com.
 */
#include "Vector.h" 
// defines pins numbers
typedef Vector<char> ArrayList;

ArrayList moveSet;
//Motor 1
const int stepPin_1 = 49; 
const int dirPin_1 = 48; 


//Motor 5
const int test = 7; 

//Motor 5
const int stepPin_5 = 5; 
const int dirPin_5 = 4; 

//Motor 2
const int stepPin_2 = 53; 
const int dirPin_2 = 52; 
boolean check = true;
//Motor 3
const int stepPin_3 = 51; 
const int dirPin_3 = 50; 

//Motor 4
const int stepPin_4 = 11; 
const int dirPin_4 = 12; 

String c;
//Motor 6
const int stepPin_6 = 3; 
const int dirPin_6 = 2; 
 
void setup() {
    digitalWrite(stepPin_1,LOW); 
    digitalWrite(stepPin_2,LOW); 
    digitalWrite(stepPin_5,LOW); 
    digitalWrite(stepPin_6,LOW); 
    digitalWrite(stepPin_3,LOW); 
    digitalWrite(stepPin_4,LOW); 

  Serial.begin(9600);
  // Sets the two pins as Outputs
  pinMode(stepPin_1,OUTPUT); 
  pinMode(dirPin_1,OUTPUT);
  pinMode(test,OUTPUT); 

  //Motor 5
  pinMode(stepPin_5,OUTPUT); 
  pinMode(dirPin_5,OUTPUT);

  // Motor 2
  pinMode(stepPin_2,OUTPUT); 
  pinMode(dirPin_2,OUTPUT);

    // Motor Bot
  pinMode(stepPin_3,OUTPUT); 
  pinMode(dirPin_3,OUTPUT);

      // Motor 3
  pinMode(stepPin_4,OUTPUT); 
  pinMode(dirPin_4,OUTPUT);

        // Motor Top
  pinMode(stepPin_6,OUTPUT); 
  pinMode(dirPin_6,OUTPUT);

   
    digitalWrite(stepPin_1,LOW); 
    digitalWrite(stepPin_2,LOW); 
    digitalWrite(stepPin_5,LOW); 
    digitalWrite(stepPin_6,LOW); 
    digitalWrite(stepPin_3,LOW); 
    digitalWrite(stepPin_4,LOW); 
  
}
void loop() {
 

  //Derived from zoomcat on arduino forum
 while (Serial.available()) {

     c = Serial.readString(); 
    //gets one byte from serial buffer
    //moveSet.push_back(c);

    delay(3);  //slow looping to allow buffer to fill with next character
         // routeMotor(c);

  }
  if (check == true) {
   // Serial.print(c);
   if (c.length() > 0) {
           //Serial.print(moveSet.size());

    for (int i = 0; i < c.length(); i++) {
     
        routeMotor(c[i]);
    }
    check = false;

   }

 }
}


void routeMotor(char color) {
  if (color == 'b') {
    turnBlue();
  } else if (color == 'y') {
    turnYellow();
  } else if (color == 'w') {
    turnWhite();
  } else if (color == 'o') {
    turnOrange();
  } else if (color == 'g') {
    turnGreen();
  } else if (color == 'r') {
      turnRed(); 
  }
}
  
void turnRed() {
  digitalWrite(dirPin_3,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 200 ; x++) {
    digitalWrite(stepPin_3,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin_3,LOW); 
    delayMicroseconds(500); 
  }
  delay(500); // One second delay  
}

void turnGreen() {
  digitalWrite(dirPin_5,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 200 ; x++) {
    digitalWrite(stepPin_5,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin_5,LOW); 
    delayMicroseconds(500); 
  }
  delay(500); // One second delay  
}

void turnBlue() {
  digitalWrite(dirPin_2,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 200 ; x++) {
    digitalWrite(stepPin_2,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin_2,LOW); 
    delayMicroseconds(500); 
  }
  delay(500); // One second delay  
}

void turnWhite() {
  digitalWrite(dirPin_1,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 200 ; x++) {
    digitalWrite(stepPin_1,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin_1,LOW); 
    delayMicroseconds(500); 
  }
  delay(500); // One second delay

}

void turnOrange() {
  digitalWrite(dirPin_6,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 200 ; x++) {
    digitalWrite(stepPin_6,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin_6,LOW); 
    delayMicroseconds(500); 
  }
  delay(500); // One second delay  
}

void turnYellow() {
  digitalWrite(dirPin_4,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 200 ; x++) {
    digitalWrite(stepPin_4,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin_4,LOW); 
    delayMicroseconds(500); 
  }
  delay(500); // One second delay  
}

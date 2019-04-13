
/*  Simple Stepper Motor Control Exaple Code
 *      
 *  by Dejan Nedelkovski, www.HowToMechatronics.com
 *  
 *  Made Also by Jacob Dickson.
 */
// defines pins numbers
const int stepPin_1 = 3; 
const int dirPin_1 = 22; 



const int stepPin_Bot = 4; 
const int dirPin_Bot = 23; 

//Motor 2
const int stepPin_2 = 5; 
const int dirPin_2 = 24; 
 
void setup() {
  // Sets the two pins as Outputs
  pinMode(stepPin_1,OUTPUT); 
  pinMode(dirPin_1,OUTPUT);
  
  pinMode(stepPin_Bot,OUTPUT); 
  pinMode(dirPin_Bot,OUTPUT);

  // Motor 2
  pinMode(stepPin_2,OUTPUT); 
  pinMode(dirPin_2,OUTPUT);
  
}
void loop() {
  digitalWrite(dirPin_1,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 400; x++) {
    digitalWrite(stepPin_1,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin_1,LOW); 
    delayMicroseconds(500); 
  }
  delay(1000); // One second delay



  
//test bottom motor
digitalWrite(dirPin_Bot,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 400; x++) {
    digitalWrite(stepPin_Bot,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin_Bot,LOW); 
    delayMicroseconds(500); 
  }
  delay(1000); // One second delay  



//test  motor 2
digitalWrite(dirPin_2,HIGH); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 400; x++) {
    digitalWrite(stepPin_2,HIGH); 
    delayMicroseconds(500); 
    digitalWrite(stepPin_2,LOW); 
    delayMicroseconds(500); 
  }
  delay(1000); // One second delay  

  
  digitalWrite(dirPin_1,LOW); //Changes the rotations direction
  // Makes 400 pulses for making two full cycle rotation
  for(int x = 0; x < 400; x++) {
    digitalWrite(stepPin_1,HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin_1,LOW);
    delayMicroseconds(500);
  }
  delay(1000);
}

void turnRed() {
  
}

void turnGreen() {
  
}

void turnBlue() {
  
}

void turnWhite() {
  
}

void turnOrange() {
  
}

void turnYellow() {
  
}

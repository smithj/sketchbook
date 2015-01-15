#include <Stepper.h>
 

Stepper motor(400,2,3,4,5);  
 
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
 
  // this line is for Leonardo's, it delays the serial interface
  // until the terminal window is opened
  while (!Serial);
  
  Serial.begin(9600);
  motor.setSpeed(30);
}
 
void loop()
{
  
  motor.step(400);
  
  delay(2000);
  
  motor.step(-400);
  
  delay(2000);
  
  motor.step(100);
  motor.step(-100);
  
  
  motor.step(-100);
  motor.step(100);
  
  delay(2000);

}

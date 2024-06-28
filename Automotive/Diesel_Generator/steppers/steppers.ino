#include <AFMotor.h>

#define MOTOR_STEP 60
#define MOTOR_1 1
#define MOTOR_2 2
#define MOTOR_SPEED 100
#define MOTOR_SPEED2 48
#define BUTTON A0
#define POTENTIOMETER A3
#define SOLENOID 10

AF_Stepper stepper(MOTOR_STEP, MOTOR_1);
AF_Stepper stepper2(MOTOR_STEP, MOTOR_2);


void setup() {
  stepper.setSpeed(MOTOR_SPEED);
  stepper.release();
  stepper2.setSpeed(MOTOR_SPEED2);
  stepper2.release();
  pinMode(BUTTON, INPUT);
  pinMode(SOLENOID, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  stepper.step(50, FORWARD, SINGLE);
  stepper.release();
  delay(1000);
//  int buttonState = digitalRead(BUTTON);
  stepper.step(50, BACKWARD, SINGLE);
  stepper.release();
//  int buttonState = digitalRead(BUTTON);
//  Serial.print("Button: ");
//  Serial.println(buttonState);
//  digitalWrite(SOLENOID, buttonState);
  int solenoidState = analogRead(POTENTIOMETER);
  Serial.print("Potentiometer: ");
  Serial.println(solenoidState);

  stepper2.step(50, FORWARD, SINGLE);
  stepper2.release();
  delay(1000);
  stepper2.step(50, BACKWARD, SINGLE);
  stepper2.release();
//
  
  
  
}

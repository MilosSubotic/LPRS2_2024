#include <AFMotor.h>

#define MOTOR_STEP 48
#define MOTOR_1 1
#define MOTOR_2 2
#define MOTOR_SPEED 100


AF_Stepper motorBlack(MOTOR_STEP, MOTOR_1); // Define stepper motor object for motorBlack
AF_Stepper motorWhite(MOTOR_STEP, MOTOR_2); // Define stepper motor object for motorWhite

void setup() {
  motorBlack.setSpeed(MOTOR_SPEED);
  motorBlack.onestep(FORWARD, SINGLE);
  motorBlack.release();

  motorWhite.setSpeed(MOTOR_SPEED);
  motorWhite.onestep(FORWARD, SINGLE);
  motorWhite.release();

  delay(1000);
}

void loop() {
  // Steps for motorBlack
  motorBlack.step(100, FORWARD, SINGLE);
  motorBlack.step(100, BACKWARD, SINGLE);
  motorBlack.step(100, FORWARD, DOUBLE);
  motorBlack.step(100, BACKWARD, DOUBLE);
  motorBlack.step(100, FORWARD, INTERLEAVE);
  motorBlack.step(100, BACKWARD, INTERLEAVE);
  motorBlack.step(100, FORWARD, MICROSTEP);
  motorBlack.step(100, BACKWARD, MICROSTEP);

  // Steps for motorWhite
  motorWhite.step(100, FORWARD, SINGLE);
  motorWhite.step(100, BACKWARD, SINGLE);
  motorWhite.step(100, FORWARD, DOUBLE);
  motorWhite.step(100, BACKWARD, DOUBLE);
  motorWhite.step(100, FORWARD, INTERLEAVE);
  motorWhite.step(100, BACKWARD, INTERLEAVE);
  motorWhite.step(100, FORWARD, MICROSTEP);
  motorWhite.step(100, BACKWARD, MICROSTEP);
}

#include <AFMotor.h>  
//https://www.instructables.com/Arduino-L293D-Motor-Driver-Shield-Tutorial/
AF_Stepper motor(48, 2);

void setup() {
motor.setSpeed(300);

motor.onestep(FORWARD, SINGLE);

motor.release();

delay(1000);

}


void loop() {
motor.step(100, FORWARD, SINGLE);

motor.step(100, BACKWARD, SINGLE);

motor.step(100, FORWARD, DOUBLE);
motor.step(100, BACKWARD, DOUBLE);

motor.step(100, FORWARD, INTERLEAVE);
motor.step(100, BACKWARD, INTERLEAVE);

motor.step(100, FORWARD, MICROSTEP);
motor.step(100, BACKWARD, MICROSTEP);

}

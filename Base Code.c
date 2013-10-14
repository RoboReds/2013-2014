/*
The below diagram is the approx. layout of the motors in this program
NOTE: Turns are 90 degrees

The functiuons are called as such: moveForward(5000);
This will move the robot forward at 100 power for 5 seconds

A----B
|    |
|    |
C----D
*/

void moveForward(int mSec) {
	motor[motorA] = 100;
	motor[motorB] = 100;
	motor[motorC] = 100;
	motor[motorD] = 100;
	wait1Msec(mSec);
}

void moveBackward(int mSec) {
	motor[motorA] = -100;
	motor[motorB] = -100;
	motor[motorC] = -100;
	motor[motorD] = -100;
	wait1Msec(mSec);
}

void turnLeft(int mSec) {
	motor[motorA] = -100;
	motor[motorB] = 100;
	motor[motorC] = -100;
	motor[motorD] = 100;
	wait1Msec(mSec); //This needs to be pre defined based on tests
}

void turnRight(int mSec) {
	motor[motorA] = 100;
	motor[motorB] = -100;
	motor[motorC] = 100;
	motor[motorD] = -100;
	wait1Msec(mSec); //This needs to be pre defined based on tests
}

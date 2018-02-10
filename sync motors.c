
task main()
{
nMotorEncoder[motorC] = 0; //Clearing the encoders
nMotorEncoder[motorB] = 0;
nMotorEncoderTarget[motorC] = 370; //How far
nMotorEncoderTarget[motorB] = 370;


motor[motorB] = 50; //How fast
motor[motorC] = -50;

wait1Msec(3000);
      // Motor C is run at a 75 power level

}

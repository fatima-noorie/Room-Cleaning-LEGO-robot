#pragma config(Sensor, S4,     sonu,           sensorNone)
#pragma config(Motor,  motorB,          b,             tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          c,             tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{while(true)
	SensorValue[sonu] =35;
motor[motorB]=50;
  	 motor[motorC]=50;
  	wait1Msec(500);
if(SensorValue[sonu] <35)
{  motor[motorB]=60;
     motor[motorC]=40;
     wait1Msec(500);
   }
   else
   { motor[motorB]=40;
     motor[motorC]=60;

   }
}

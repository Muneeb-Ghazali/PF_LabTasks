#include <stdio.h>
int main ()
{
	float vi = 12.5;	//Initial velocity
	float a = 3.2;		//Acceleration
	float t = 6.0;		//Time elapsed

	float vf = vi + (a * t);			//Final Velocity 
	float s = (vi * t) + (0.5 * a * t * t);		//Total Distance Travelled

	printf("*************** KINEMATICS MOTION REPORT ***************\n");
	printf("----------------------------------------------------------------- \n");

	printf("Initial Velocity (vi): \t\t %.2f m/s    \nAcceleration (a): \t\t\t %.2f m/s^2    \nTime Elapsed (t): \t\t\t %.2f s",vi,a,t);

	printf("\n----------------------------------------------------------------\n");
	printf("Calculated Final Velocity (vf): \t %.2f m/s  \nCalculated Distance (s): \t\t\t %.2f m/s",vf,s);
	printf("\n---------------------------------------------------------------- \n");


return 0;
}
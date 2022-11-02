/*
 * enum.c
 *
 *  Created on: 28-Oct-2022
 *      Author: venkatsai
 */

#include<stdio.h>

int main()
{
	enum switch_state
	{
		off,low,medium,high
	};
	enum switch_state motor1_state ,motor2_state;
	motor1_state = off;
	motor2_state = high;

	if(motor2_state == high);
	printf("\n motor2_state is high");

	printf("\n motor1 state = %d",motor1_state);
	}



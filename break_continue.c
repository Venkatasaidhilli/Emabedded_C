/*
 * break_continue.c
 *
 *  Created on: 02-Nov-2022
 *      Author: venkatsai
 */
#include<stdio.h>

int main()
{
	int a = 10;

	do {

		if(a == 12)
		{
			a = a+1;
			continue;
		}
		printf("value of a: %d\n",a);
		a++;
	}
	while(a < 15);

int i;
for(i=0; i<10;i++)
{
	printf("\nIteration %d\n",i);
	if(i==6)
		break;
}
printf("the loop terminated at iteration = %d",i);
	return 0;
	}
// continue resets the iterator just by skipping the current value or current iteration

/*
 * control_statements.c
 *
 *  Created on: 31-Oct-2022
 *      Author: venkatsai
 */
#include<stdio.h>

int main(){
	int a;
	a =0 ;
	printf("\nenter the value of a :");
	scanf("%d",&a);
	fflush(stdout);
	if (a>5)
	{
		printf("\na is greater than 5");
	}
	else if(a==5) //we can as many as else if we want
	{
		printf("\na is equal to 5");
	}
	else
			{
		printf("\na is less than 5");
	}
	for(int i =0;i<=9;i++){
		printf("\nvalue of i is %d",i);
	}
	for(int i=0,j=9;i<=9 && j<=9;i++,j--){
		printf("\n %d --> %d",i,j);
	}
}




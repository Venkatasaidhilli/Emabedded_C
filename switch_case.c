/*
 * nested_FOR.C
 *
 *  Created on: 01-Nov-2022
 *      Author: venkatsai
 */
#include<stdio.h>

int main()
{
	int n;

	printf("enter the number for desired square matrix: ");
	scanf("%d",&n);
	for(int r =1;r<=n;r++){
		for(int c =1;c<=n;c++)
			printf("* ");
		printf("\n");
	}
	//for(int i=0;i<n*n;i++){
//		if(i%n!=0)
//			printf("* ");
//		else
//			printf("\n* ");}
//		for(int i=0;i<n*n;i++)
//			{
//		printf((i%n!=0)?"* ":"\n* ");}
	return 0;
}




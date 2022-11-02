/*
 * operators.c
 *
 *  Created on: 30-Oct-2022
 *      Author: venkatsai
 */
#include<stdio.h>
int main(){
	int a,b,c,d=0;
	scanf("%d",&a);
	scanf("%d",&b);
	int max = a > b ? a : b;
	printf("value of max is %d\n",max);
	if(a>b){
	 printf("%d\n",(c = a+b));
	}
	else{
		a == a;
	}
	while(a != b){
		--a;
		d = d + 1;
	}
	printf("no of times the loop runned is %d",d);
}

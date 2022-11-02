#include<stdio.h> //processor section

//global section
int a = 10; //global variable declaration
int sub_main(void); //global function declaration
//maiin function
int main()
{
	char x = 'H'; //local variable declaration

	    printf("\n testing console,value of global A= %d",a);
	    printf("\n testing console,value of local x= %c",x);
	    sub_main();//calling sub-function

	}

//sub function definition  //subroutine/sub function which can be reused
int sub_main()
{
	printf("\n testing console,value of global A= %d",a);
	//return 0;
	}

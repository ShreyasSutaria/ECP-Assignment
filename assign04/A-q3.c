/* 
   Write a function to implement four function calculator. Function would take operands and
   operator as arguments and returns result.
 */


#include<stdio.h>
int func_adder(int , int );
int func_sub(int , int );
int func_mux(int , int );
int func_div(int , int );

int res=0;

int main()
{

	int n1 , n2 ;
	enum cal{Adder,Sub ,Mux ,Div}op;

	printf("Enter number1: ");
	scanf("%d",&n1);
	printf("Enter number2: ");
	scanf("%d",&n2);
	printf("\nAdder-1 ,Sub -2 , Mux-3 , Div-4");
	printf("\nEnter operand:");
	scanf("%d",&op);

	switch(op)
	{
		case 1:func_adder(n1,n2);
				   printf("%d ",res);
					   break;


		case 2:printf("done");
				 break;

		case 3:
				 printf("done");
				 break;
		case 4:
				 printf("done");
				 break;

	}


	return 0;
}

int func_adder(int a ,int b)
{ 
	res = a+b;
	return res;
}

int func_sub(int a , int b)
{
	res =a-b;
	return res;
}

int func_mux(int a , int b)
{ 
	res= a*b;
	return res;
}

int func_div(int a , int b)
{
	res=a/b;
	return res;
}

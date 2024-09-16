/*Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message. */

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	if (b == 0)
	{printf("Enter a non zero number");
		}
	else {
		c=a/b;
		printf("%d / %d = %d",a,b,c);
	}










return 0;
}

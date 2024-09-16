/*Input a number and display whether number is Even or Odd. */

#include<stdio.h>
int main ()
{	
	int a;
	printf("Enter a number you want to check:");
	scanf("%d",&a);
	if (a % 2 ==0)
	{
		printf("The number is even");
		}
	else if ( a % 2 !=0)
	{	printf("The number is Odd");
	
	}
	else 
	{ printf("The number is neutral");

	}
	




return 0;
}

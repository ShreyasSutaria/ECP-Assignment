/*Write a program to accept number and check whether the number is +ve, -ve and zero. */

#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number you want to check: ");
	scanf("%d",&a);
	if (a>0)
	{printf("the number is positive");
	}
	else if (a<0)
	{printf("the number is negative");
	}
	else
	{ printf("the number is zero");
	}


return 0;
}

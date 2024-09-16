
/*Write a program to find maximum of two numbers using
a. If – else
b. conditional operator. */

#include<stdio.h>
 int main()
{
	int a ,b;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("IF - Else\n");
	if (a>b)
		{ 
		printf("this is  %d greater",a);
	}
	else
		{
		printf("this is  %d  greater:\n",b);
	}

	printf("__________________________________\n");
	printf("\tConditional operator\n");
int k=	(a>b) ? a  : printf("%d number is greater",b);
printf("%d number is greater",k);


  return 0;
}

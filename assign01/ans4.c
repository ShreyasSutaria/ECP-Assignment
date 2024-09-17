#include<stdio.h>
int main()
{     
	//a. using multiple printf statement
	/*
	printf("*\n");
	printf("**\n");
	printf("***\n");
	printf("****\n");
	printf("*****\n");
	*/


	//b. using single printf statement
	
	int i,j;
	int row=5;

	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
        	{
	          printf("* ");
        	}

	  printf("\n");
	}
	return 0;

}

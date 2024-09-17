#include<stdio.h>
 int main()
{
	int value;
	char choice;

start: 
	//accept the value
	printf("Enter the value:");
	scanf("%d", &value);
	
	//conversion
	printf("Decimal value is :   %d\n",value);
	printf("Character value is : %c\n",value);
	printf("Octal value is :     %o\n",value);
	printf("Hex value is :       %x\n",value);
	
	//accept the choice
	printf("Do you want to continue : [Y/N]");
	scanf("%*c%c", &choice);

		if (choice == 'Y')
			goto start;

	return 0;
}


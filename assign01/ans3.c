#include<stdio.h>
 int main()
{
	char a;

	printf("Enter a character : ");
	scanf("%c", &a);

	printf("ASCII value = %d\n" ,a);
	printf("Decimal value = %d\n" ,a);
	printf("Hexa value = %x\n" , a);
	printf("Character value = %c\n" ,a);
	printf("Octal value = %o\n",a);


	return 0;
}

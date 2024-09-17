/*Write a function to print a given character for a given number of times. */

#include<stdio.h>

char ch;
void func_print(int);
int main ()
{
 int n;
 printf("Enter number of times :");
 scanf("%d",&n);
 printf("Enter the Charactor:");
 scanf("%*c%c",&ch);

 func_print(n);

return 0;
}

void func_print(int t)
 {
  for(int i=0;i<=t;i++)
  { printf("%c\n",ch);
   
	}
 }


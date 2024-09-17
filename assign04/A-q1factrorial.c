/*Write a function to calculate factorial of a given number. */


#include<stdio.h>
#include<math.h>
int factorial(int num);

int main()
{
 int n , fact;

 printf("ENTER A NUMBER:\n");
 scanf("%d",&n);
 fact = factorial(n);
printf("factorial of number is := %d\n",fact);
 return 0;
 }

 int factorial(int num)
 {
 int i;
  int fact = 1;
 for( i=1;i<=num;i++)
 {
 fact = fact * i;
 //printf("factorial of number is := %d\n",fact);
 }
return fact;
}

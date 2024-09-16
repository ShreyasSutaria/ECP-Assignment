/*Write a program to find maximum of three numbers using
a. If – else
b. conditional operator. */


#include<stdio.h>
int main ()
{
int a ,b ,c,max,max2 ; 
printf("enter 1st  number:");
scanf("%d",&a);

printf("enter 2nd  number:");
scanf("%d",&b);

printf("enter 3rd number:");
scanf("%d",&c);

if (a>b)
{ if (a>c)
  {  max2 =a;
  }
  else{
  max2=c;
  }
  }
  else{
  if(b>c){
   max=b;
   }
   else{
   max2=c;
   }
   }
   printf("the max2 number is %d:",max2);
max = (a>b)?((a>c)?a:c):((b>c)?b:c);

printf("The maximum number is %d",max);

return 0;
}

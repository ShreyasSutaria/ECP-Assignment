#include <stdio.h>
int main()
{
 int num,a,b,c,d;
 int rev;
   
  printf("Enter 4 digit num :");
  scanf("%d",&num);

   a = num / 1000;
   b = (num / 100) % 10;
   c = (num / 10) % 10;
   d = num % 10;
   rev = d*1000 + c*100 + b*10 + a;

   printf("Face value of your number : \n");
   printf("%d\t%d\t%d\t%d\n",a,b,c,d);
   printf("Place value of your number: \n");
   printf("%d = %d000 + %d00 + %d0 + %d\n",num,a,b,c,d);
   printf("Reverse value of your number: \n");
   printf("%d\n",rev);

 
return 0;
}

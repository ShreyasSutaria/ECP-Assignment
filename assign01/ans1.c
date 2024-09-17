#include<stdio.h>

int main()

{	
	//by defualt n1= signed & n2 = unsigned
       	int n1;  //4 byte and + or - values
	long int n2; // + value only and 8 bytes
        

	int sum,dif,product,sizeof_sum,sizeof_dif,sizeof_product;

	printf("enter the num1:");
	scanf("%d",&n1);
	printf("enter the num2:");
	scanf("%ld",&n2);
	 
	 //for sum = n1 + n2 , dif = n1 - n2 , product = n1 * n2
	
	sum = n1 + n2;
	dif = n1 - n2;
	product = n1 * n2;

       	printf("sum=%d\n",sum);
	printf("dif=%d\n",dif);
       	printf("product=%d\n",product);
	
	sizeof_sum = printf("sizeof sum =%u\n",sizeof(sum));
	sizeof_dif = printf("sizeof def =%u\n",sizeof(dif));
	sizeof_product = printf("sizeof product =%u\n",sizeof(product));

 return 0;
}

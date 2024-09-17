#include<stdio.h>

void print_array(int arr[],int size);
void accept_array(int arr[],int size);


int main(void)
{	
	int arr[6];
	
	print_array(arr,6);
	
	accept_array(arr,6);
	return 0 ;
}

void(print_array(int arr[],int size))
{
	int i;
	printf("Array : ");
	for(int i=0 ; i<size ; i++);
		printf("%.2d",arr[i]);
	printf("\n");
}
	
void(accept_array(int arr[],int size))
{
	int i;
	printf("Array Elements are : \n");
	for(int i=0 ; i<size ; i++)
		scanf("%d",&arr[i]);
}

#include<stdio.h>

int fun(int*, int*);

int main()
{
	int a = 10969, b = 1005;

	printf("轉換前:a = %d; b = %d",a ,b);

	fun(&a, &b);
	
	printf("轉換後:a = %d; b = %d",a ,b);
	
}

int fun(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

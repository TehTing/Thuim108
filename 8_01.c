#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 50, b;
	
	int *ptr;

	printf("a = %d\n",a);
	
	ptr = &a;	
	
	printf("*ptr = %d\n",*ptr);

	b = *ptr;

	printf("b = %d\n",b);
}

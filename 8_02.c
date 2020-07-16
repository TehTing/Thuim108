#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a = 100;
	double b = 5.5;
	int *ptr1 = &a;
	double *ptr2 = &b;

	printf("a = %d\n",a);
	printf("b = %e\n",b);
	printf("&a = %p\n",&a);
	printf("&b = %p\n",&b);
	printf("*ptr1 = %d\n",*ptr1);
	printf("*ptr2 = %e\n",*ptr2);
	printf("ptr1 = %p\n",ptr1);
	printf("ptr2 = %p\n",ptr2);
	printf("&ptr1 = %p\n",&ptr1);
	printf("&ptr2 = %p\n",&ptr2);
	printf("&*ptr1 = %p\n",&*ptr1);
	printf("&*ptr2 = %p\n",&*ptr2);
	printf("a占用%d個位元組\n",sizeof(a));
	printf("b占用%d個位元組\n",sizeof(b));
	printf("ptr1占用%d個位元組\n",sizeof(ptr1));
	printf("ptr2占用%d個位元組\n",sizeof(ptr2));
}

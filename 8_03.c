#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 100;
	int *p, *q;
	printf("\n==========   宣告變數時  =========\n");
	printf("a  = %d\n",a);
	printf("&a = %p\n",&a);
	printf("&p = %p\n",&p);
	printf("&q = %p\n",&q);
	printf("\n==========設定  p=&a 之後=========\n");
	p = &a;
	printf("p  = %p\n",p);
	printf("*p = %d\n",*p);
	printf("\n==========設定  q=p  之後=========\n");
	q = p;
	printf("q  = %p\n",q);
	printf("*q = %d\n",*q);
	printf("\n==========設定 *q=50 之後=========\n");
	*q = 50;
	printf("a = %d\n",a);
	printf("p = %p	*p = %d\n",p ,*p);
	printf("q = %p	*q = %d\n",q ,*q);
}

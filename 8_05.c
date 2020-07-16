#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b;
	int *p = &a, *q = &b;

	printf("p指向的記憶體位址為:%p\n",p);
	printf("q指向的記憶體位址為:%p\n",q);

	if (p > q) {
		printf("a的記憶體位址高於b");
	}
	else {
		printf("b的記憶體位址高於a");
	}
}

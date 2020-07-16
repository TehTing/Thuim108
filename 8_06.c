#include<stdio.h>
int main()
{
	double arr[8][15];
	double *p, *q;
	int blocksize, count;

	p = &arr[2][6];
	q = &arr[6][11];
	count = q - p;
	blocksize = sizeof(double) * count;

	printf("p = %p\n",p);
	      ("q = %p\n",q);
	printf("[2][6] ~ [6][11] 之間有%d個元素\n",count);
	printf("[2][6] ~ [6][11] 之間的記憶體大小為%d位元組",blocksize);
}

#include<stdio.h>
int main()
{
	unsigned n, sum = 0;
	
	do {
		scanf("%d", &n);
	} while (n < 1 || n>99);
	
	for (int i = 1; i <= n; i++) {
		sum += i;
		printf("%d", i);
		if (i < n) {
			printf(" + ");
		}
	}
	
	printf(" = %d\n", sum);
}

#include<stdio.h>
int main()
{
	int i;
	scanf("%d", &i);
	if (i > 31) {
		printf("Value of more than 31\n");
	}
	else {
		printf("%d\n", 1 << i);
	}
}

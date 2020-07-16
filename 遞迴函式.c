#include<stdio.h>
int fact(int);
int main()
{
	int num;
	scanf("%d", &num);
	printf("%d\n", fact(num));
}
int fact(int num)
{
	if (num == 0 || num == 1) {
		num += 1;
	}
	else {
		num = fact(num - 1) + fact(num / 2);
	}
	return num;
}

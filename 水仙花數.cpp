#include<stdio.h>
int pro(int);
int main()
{
	int num, test;
	scanf("%d", &num);
	test = pro(num);

	if (test == num) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}
}

int pro(int num)
{
	int hun, ten, one, test;

	hun = num / 100;
	num -= hun * 100;
	ten = num / 10;
	one = num - ten * 10;

	test = hun * hun * hun + ten * ten * ten + one * one * one;

	return test;
}


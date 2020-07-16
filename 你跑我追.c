#include<stdio.h>
int main()
{
	int distance, time, rest;
	scanf("%d", &distance);
	time = distance / 0.238;
	if ((distance * 1000) % 238 == 0){
	}
	else{
		time += 1;
	}
	printf("%d\n", time);
}

#include<stdio.h>
void main()
{
	float month[12];
	float sum, average;

	for(int i = 0; i < 12; i++){
		printf("%d 月的氣溫:",i + 1);
		scanf("%f",(month + i));
		sum += *(month + i);
	}

	average = sum/12;
	printf("平均氣溫為:%f",average);
}

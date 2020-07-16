#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i = 0,j = 100,times = 0;
	int arr[100];

	for(int x = 0; x < 100; x++){
		arr[x] = 0;
	}

	while (j = 1){
		srand((unsigned)time(NULL));
		i = rand() % 100;
		
		if (arr[i] = 0){
			j--;
			arr[i] = 1;
		}
		times++;
		continue;
	}

	printf("抽了%d次",times);
}

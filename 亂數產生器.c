#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
char arr[10];
int max, min;
int fun();
int main()
{
	/*輸入：設定上下限
	  在範圍內產生十個亂數(不可重複)
	  輸出：以空格隔開的十個亂數*/
	int i = 0;
	srand((unsigned) time(NULL));
	printf("min:");
	scanf("%d", &min);	//下限
	printf("max:");
	scanf("%d", &max);	//上限
	for (int j = 0; j < 10; j++) {
		arr[i] = fun();
		printf("%d ", fun());
	}
}

int fun()
{
	int x;
	x = (unsigned int)(rand() % max);	//產生亂數 檢查上限
	if (x > min) {	//檢查下限
		if (strchr(arr, x) == NULL) {	//檢查重複
			return x;	//回傳亂數
		}
	}
	else {
		fun();
	}
}

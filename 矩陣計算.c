#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,n,x,y;
	
	scanf("%d %d", &m, &n);		//第一個矩陣
	int arr_1[m][n];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &arr_1[i][j]);
		}
	}
	
	scanf("%d%d", &x, &y);		//第二個矩陣
	int arr_2[x][y];
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			scanf("%d", &arr_2[i][j]);
		}
	}

	int a,b;
	a = (x > m) ? x : m;
	b = (y > n) ? y : n;

	for(int i = 0; i < a; i++){
		for(int j = 0; j < b; j++){
			if (i >= m || j >= n) {
				arr_1[i][j] = 0;
			}
			if (i >= x || j  >= y) {
				arr_2[i][j] = 0;
			}		
			printf("%d", arr_1[i][j] + arr_2[i][j]);
			if (j < b - 1)
				printf(" ");
		}
	if (i < a - 1)
		printf("\n");
	}
}
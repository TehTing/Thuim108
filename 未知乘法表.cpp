#include<stdio.h>
int main() 
{
	int arr[6];
	
	for (int i = 0; i < 6; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {	 
			printf("%03d", arr[i] * arr[j]);
			if (j < 5){
				printf(" ");	
			}
		}
		printf("\n");
	}
}

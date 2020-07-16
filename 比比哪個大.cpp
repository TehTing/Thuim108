#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[3];
	int temp;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &arr[i]);
	}
	for (int j = 2; j >= 0; j--) {
		for (int i = 2; i >= 0; i--) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			} 
		}
	}
	printf("%d>%d>%d\n", arr[0], arr[1], arr[2]);
}

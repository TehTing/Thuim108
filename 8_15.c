#include<stdio.h>

int main()
{
	int arr[9][9];
	
	for(int i = 1; i < 10; i++){
	
		for(int j = 1; j < 10; j++){
			
			arr[i-1][j-1] = i*j;
		}
	}

	for(int i = 1; i < 10; i++){
		
		for(int j = 1; j < 10; j++){
	
			printf("%d	",*(arr+(i-1)*9+(j-1)));

			if(j = 9)
				puts("");
		}
	}
}

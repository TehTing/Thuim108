#include<stdio.h>
#include<conio.h>
#include<time.h>
/*�]�w�@�Ӱg�c
  1����0����
  �H���b�g�c���]��
  ���i�X�{�b��W*/
int main()
{
	char arr[10][10] = {{0,0,1,0,1,0,0,1,0,1},
		 	   		    {0,1,1,0,0,1,0,1,0,1},
			  	 	    {0,0,0,0,1,1,0,1,0,1},
					    {0,1,0,1,1,0,0,1,0,0},
					    {1,0,0,0,0,1,1,1,1,0},
					    {0,1,0,1,0,1,0,0,0,0},
					    {0,0,0,1,0,1,0,1,0,1},
					    {0,0,1,1,0,1,0,1,0,0},
					    {1,0,1,1,0,0,0,1,0,1},
					    {0,0,0,1,1,0,1,1,0,1}};
					    
	srand(time(NULL));	
	while(!kbhit()){
		int x, y;
		do{
			
			x = (rand()%10);
			fflush(stdout);
			y = (rand()%10);
		} while(arr[x][y] == 1);
		
		int i,j;	
		arr[x][y] = '*';

		for(i = 0; i < 10; i++){
			for(j = 0; j < 10; j++){
				printf("%c", arr[i][j]);
			}
			printf("\n");
		}
		arr[x][y] = ' ';
		
		sleep(1);
		system("cls");
	}
	return 0;
}

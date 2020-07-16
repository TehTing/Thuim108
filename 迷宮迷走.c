#include<stdio.h>
#include<conio.h>
#include<time.h>
/*設定一個迷宮
  1為牆0為路
  隨機在迷宮中跑動
  不可出現在牆上*/
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

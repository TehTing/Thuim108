#include<stdio.h>
#include<conio.h>
/*音浪太強 不晃會被撞到地上*/
int main()
{
	while(!kbhit())
	{
		int arr[5][5];
		
		char boa[10][25];
		
		srand(time(NULL));
		int i, j, w;
		for(i = 0; i < 5; i++){		//set up the board
			for(j = 0; j < 5; j++){
				arr[i][j] = rand()%10+1;	
			} 
		}
		
		int s = 0;
		
		for(i = 0; i < 10; i++){		//set up the board
			for(j = 0; j < 5; j++){
				for(w = 0; w < 5; w++){
					if((arr[j][w] - i) > 1){
						boa[i][s] = "H";
					}
					else{
						boa[i][s] = " ";
					}	
					s += 1;					
				}
			}
			s = 0;
			puts(""); 
		}
				
		for(i = 0; i < 10; i++){		//set up the board
			for(s = 0; s < 25; s++){
				if(s%3 == 1)
					printf("\033[1;30;40m %c \033[1;30;40m",boa[i][s]);
				if(s%3 == 2)
					printf("\033[1;32;40m %c \033[1;32;40m",boa[i][s]);					
				else
					printf("\033[1;36;40m %c \033[1;36;40m",boa[i][s]);
			} 
			puts("");
		}
				
		sleep(1);
		system("cls");
	}
}

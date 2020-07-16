#include<stdio.h>
#include<stdlib.h> 
/*兩位玩家輪流下棋
  已有棋的位置無法再下
  無需考慮勝負
  輸入：兩個數字(棋盤上的絕對位置)
  輸出：每下完一顆棋即印出完整棋盤*/
char arr[10][10];

void board();

void chess(char);

int main()
{
	do{
		chess('B');
		chess('W');

	} while(1);

}

void chess(char x)
{
		int i, j;
		printf("%c's turn.\n",x);
		scanf("%d%d",&i,&j);
		

		if(arr[i][j] == 0){
			arr[i][j] = x;
			board();
			puts("=======================================\n");
		}
		
		else {
			printf("此位置已有棋子，請再下一次\n");
			chess(x);
		}
}

void board()
{
	printf(" 0123456789\n");	//索引
	
	int i, j;
	
	for(i = 0; i < 10; i++){
		
		for(j = 0; j < 10; j++){
		
			if(j == 0){
				printf("%d",i);	//索引
			}

			if(arr[i][j] == 0){	//空格
				printf(" ");
			}

			else if(arr[i][j] != 0){	//下棋
				printf("%c",arr[i][j]);
			}

			if(j == 9){	//換行
				puts("");
			}
		}
	
	}	
}

#include<stdio.h>
#include<stdlib.h>
/*五子棋*/
char arr[10][10];

void board();

void chess(char);

int judge(char);

int main()
{
	chess('B');

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
		
		if(judge(x) != 1){
			
			if(x == 'B'){
				chess('W');
			}
			else if (x == 'w'){
				chess('B');
			}
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

int judge(char x)
{
	int i, j;
	for(i = 0; i <= 5; i++){	
		for(j = 0; j < 9; j++){
			if((arr[i][j] ==  arr[i+1][j]) && (arr[i+1][j] == arr[i+2][j]) && (arr[i+2][j] == arr[i+3][j]) && ( arr[i+3][j] ) && (arr[i+4][j])){ //直
				printf("%c win!\n",x);
				return 1;
			}

			else if((arr[j][i] == arr[j][i+1]) && (arr[j][i+1] == arr[j][i+2]) && (arr[j][i+2] == arr[j][i+3]) && (arr[j][i+3] == arr[j][i+4])){ //橫
				printf("%c win!\n",x);
				return 1;			
			}
		}
		for(j = 0; j <= 5; j++){
			if((arr[i][j] == arr[i+1][j+1]) && (arr[i+1][j+1] == arr[i+2][j+2]) && (arr[i+2][j+2] == arr[i+3][j+3]) && (arr[i+3][j+3] == arr[i+4][j+4])){ //左上右下i
				printf("%c win!\n",x);
				return 1;
			}
			else if((arr[9 - i][9 - j] == arr[8 - i][8 - j]) && (arr[8-i][8-j] == arr[7-i][7-j]) && (arr[7 - i][7 - j] == arr[6 - i][6 - j]) && (arr[6-i][6-j] == arr[5 - i][5 - j])){ ///
				printf("%c win!\n",x);
				return 1;
			}
		}
	}
}

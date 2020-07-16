#include<stdio.h>
#include<string.h>
char awa[2][9] = {"12620024","39793895"};	//特獎200k
char awa1[3][9] = {"54931976","16045990","74947545"};	//反轉 
char awa2[] = "700";	//反轉 增開六獎200 
	
int fun(char*);
int main()
{
	int x, num = 3;
	char scan[9], rev[9];
	gets (scan);	//輸入 

	x = fun(scan); //awa
	
	if(x == 0){
		for(int i = 0; i < 8; i++){	//反轉
			rev[i] = scan[7 - i];
		}
		
	rev[8] = scan[8];
		
	x = strspn(awa1[0], rev); //awa
	if (x < 3) {
		x = strspn(awa1[1], rev);
		if (x < 3) {
			x = strspn(awa1[2], rev);
		}
	}
		
	switch(x){
		case 3:
			printf("六獎 2百");
			break;
		case 4:
			printf("五獎 1千");
			break;
		case 5:
			printf("四獎 4千");
			break;
		case 6:
			printf("三獎 1萬");
			break;
		case 7:
			printf("二獎 4萬");
			break;
		case 8:
			printf("頭獎 20萬");
			break;
		default:
			if(strncmp(awa2, rev, 3) == 0){
				printf("增開六獎 6百元");
			}
			else {
				printf("沒中獎");
			}
		}
	}
}

int fun(char* scan)
{
	if (strcmp(awa[0], scan) == 0){
		printf("特別獎 1000萬");
		return 1;
	}
	else if (strcmp(awa[1], scan) == 0){
		printf("特獎 200萬");
		return 1;
	}
	else
		return 0;
}

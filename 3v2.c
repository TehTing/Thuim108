#include<stdio.h>
#include<string.h>
	char awa[2][9] = {"12620024","39793895"};	//特獎200k
	char awa1[3][9] = {"54931976","16045990","74947545"};	//反轉 
	char awa2[] = "700";	//反轉 增開六獎200 
	char award[10][20] = {"未中獎","特別獎 1000萬", "特獎 200萬", "頭獎20萬", 
						"二獎 4萬","三獎 1萬","四獎 4千","五獎 1千",
						"六獎 2百","增開六獎 2百"};
int fun(char*);
int fun1(int, char*);
int main()
{
	int x, num = 3;
	char scan[8], rev[8];
	gets (scan);	//輸入 

	x = fun(scan); //awa
	
	if(x == 0){
	
		for(int i = 0; i < 8; i++){	//反轉
			rev[i] = scan[7 - i];
		}	 


		x = fun1(0, rev); //awa1
		if (x < 4) {
			x = fun1(1, rev);
			if (x < 4) {
				x = fun1(2, rev);
			}
		}

		if(x < 4){
			if(strncmp(awa2, rev, 4) == 0){
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

int fun1(int i,char* rev)
{
	int x;

		x = strspn(awa1[i], rev);
	return x;
		switch(x){
			case 4:
				printf("六獎 2百");
				break;
			case 5:
				printf("五獎 1千");
				break;
			case 6:
				printf("四獎 4千");
				break;
			case 7:
				printf("三獎 1萬");
				break;
			case 8:
				printf("二獎 4萬");
				break;
			case 9:
				printf("頭獎 20萬");
				break;
			default:
				break;
		}

	printf("i = %d",i);

}

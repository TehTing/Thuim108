#include<stdio.h>
#include<string.h>
	char awa[2][9] = {"12620024","39793895"};	//�S��200k
	char awa1[3][9] = {"54931976","16045990","74947545"};	//���� 
	char awa2[] = "700";	//���� �W�}����200 
	char award[10][20] = {"������","�S�O�� 1000�U", "�S�� 200�U", "�Y��20�U", 
						"�G�� 4�U","�T�� 1�U","�|�� 4�d","���� 1�d",
						"���� 2��","�W�}���� 2��"};
char fun(int, char*);
char fun1(char*);
int main()
{
	int x, num = 3;
	char scan[8], rev[8];
	gets (scan);	//��J 
	
/*	printf("��J���O:");
	for(int i = 0; i < 8; i++){
		printf("%c", scan[i]);
	}
	puts("");
*/	
	x = fun(1, scan); //awa

	printf("x = %d\n",x);
	
	if(x != 0){
	
		for(int i = 0; i < 8; i++){	//����
			rev[i] = scan[7 - i];
		}	 
	
		x = fun1(rev); //awa1
	
		printf("x = %d\n",x);
		
		if(x < 3){
			if(strncmp(awa2, rev, 3) == 0){
				x = 9;
			}
			else x = 0;
		}
	}
	printf("%s",award[x]);
}

char fun(int x, char* scan)
{

	if (x <= 2){
		if (strcmp(awa[x], scan) == 0){
			return x;
		}
		else{
			fun(x + 1, scan);
		}
	}
	else{
		return 0;
	}
}

char fun1(char* rev)
{
	int num = 8;
	do{
		if ((strncmp(awa1[0], rev, num) == 0) || 
			(strncmp(awa1[1], rev, num) == 0) ||(strncmp(awa1[2], rev, num) == 0)){
			break;
		}
		else{
			num--;
			continue;
		}
	} while (num >= 3);
	return num;
}

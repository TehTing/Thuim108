#include<stdio.h>
#include<string.h>
char awa[2][9] = {"12620024","39793895"};	//�S��200k
char awa1[3][9] = {"54931976","16045990","74947545"};	//���� 
char awa2[] = "700";	//���� �W�}����200 
	
int fun(char*);
int main()
{
	int x, num = 3;
	char scan[9], rev[9];
	gets (scan);	//��J 

	x = fun(scan); //awa
	
	if(x == 0){
		for(int i = 0; i < 8; i++){	//����
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
			printf("���� 2��");
			break;
		case 4:
			printf("���� 1�d");
			break;
		case 5:
			printf("�|�� 4�d");
			break;
		case 6:
			printf("�T�� 1�U");
			break;
		case 7:
			printf("�G�� 4�U");
			break;
		case 8:
			printf("�Y�� 20�U");
			break;
		default:
			if(strncmp(awa2, rev, 3) == 0){
				printf("�W�}���� 6�ʤ�");
			}
			else {
				printf("�S����");
			}
		}
	}
}

int fun(char* scan)
{
	if (strcmp(awa[0], scan) == 0){
		printf("�S�O�� 1000�U");
		return 1;
	}
	else if (strcmp(awa[1], scan) == 0){
		printf("�S�� 200�U");
		return 1;
	}
	else
		return 0;
}

#include<stdio.h>
#include<string.h>
	char awa[2][9] = {"12620024","39793895"};	//�S��200k
	char awa1[3][9] = {"54931976","16045990","74947545"};	//���� 
	char awa2[] = "700";	//���� �W�}����200 
	char award[10][20] = {"������","�S�O�� 1000�U", "�S�� 200�U", "�Y��20�U", 
						"�G�� 4�U","�T�� 1�U","�|�� 4�d","���� 1�d",
						"���� 2��","�W�}���� 2��"};
int fun(char*);
int fun1(int, char*);
int main()
{
	int x, num = 3;
	char scan[8], rev[8];
	gets (scan);	//��J 

	x = fun(scan); //awa
	
	if(x == 0){
	
		for(int i = 0; i < 8; i++){	//����
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

int fun1(int i,char* rev)
{
	int x;

		x = strspn(awa1[i], rev);
	return x;
		switch(x){
			case 4:
				printf("���� 2��");
				break;
			case 5:
				printf("���� 1�d");
				break;
			case 6:
				printf("�|�� 4�d");
				break;
			case 7:
				printf("�T�� 1�U");
				break;
			case 8:
				printf("�G�� 4�U");
				break;
			case 9:
				printf("�Y�� 20�U");
				break;
			default:
				break;
		}

	printf("i = %d",i);

}

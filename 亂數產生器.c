#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
char arr[10];
int max, min;
int fun();
int main()
{
	/*��J�G�]�w�W�U��
	  �b�d�򤺲��ͤQ�Ӷü�(���i����)
	  ��X�G�H�Ů�j�}���Q�Ӷü�*/
	int i = 0;
	srand((unsigned) time(NULL));
	printf("min:");
	scanf("%d", &min);	//�U��
	printf("max:");
	scanf("%d", &max);	//�W��
	for (int j = 0; j < 10; j++) {
		arr[i] = fun();
		printf("%d ", fun());
	}
}

int fun()
{
	int x;
	x = (unsigned int)(rand() % max);	//���Ͷü� �ˬd�W��
	if (x > min) {	//�ˬd�U��
		if (strchr(arr, x) == NULL) {	//�ˬd����
			return x;	//�^�Ƕü�
		}
	}
	else {
		fun();
	}
}

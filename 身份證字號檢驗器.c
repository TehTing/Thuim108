#include<stdio.h>
#include<string.h>
int trans(char);
int main()
{
	/*�ت��G���Ҩ����r���O�_���T
	  ��J�G�����Ҧr��
	  ��X�GCorrect / Wrong*/
	int x, x1, x2, P;
	char id[11];	//�^2��9��1
	fgets(id, 11, stdin);	//��J

	x = trans(id[0]);	//�^���

	x1 = x / 10;	
	x2 = x % 10;

	for (int i = 1; i < 10; i++) {	//��Ʀr��ƫ��A
		id[i] = (int)id[i] - 48;
	}

	P = x1 +(9 * x2) + (8 * id[1]) + (7 * id[2]) + (6 * id[3]) + (5 * id[4]) + (4 * id[5]) + (3 * id[6]) + (2 * id[7]) + id[8] + id[9];
	if (P % 10 == 0) {
		puts("CORRECT!!!");
	}
	else {
		puts("WRONG!!");
	}
}
int trans(char ch)
{
	int x;
	x = (int)ch - 55;	//A = 10, B = 11...
	if (x == 18) {
		x = 34;
	}
	else if (x == 24) {
		x = 35;
	}
	else if (x == 33 || x == 34) {
		x -= 3;
	}
	else if (x >= 19 && x <= 23) {
		x += 1;
	}
	else if (x >= 25 && x <= 31) {
		x -= 2;
	}
	return x;
}
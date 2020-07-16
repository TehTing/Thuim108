#include<stdio.h>
#include<string.h>
/*自定資料型態練習*/
struct human{
	int age;
	int height;
	int weight;
	char DNA[10];
};

typedef struct human people;

char* fun(people*);
int main()
{
	people Ashley = {19, 164, 50, "GTAGGCTAGC"};
	people unknown;

	if(strcmp(Ashley.DNA, fun(*unknown)) == 0){
		printf("Hey! Ashley, is you !!");
	}
	
	else{
		printf("你誰");
	}

}
char* fun(people* unknown)
{
	puts("請輸入年齡:");
	scanf("%d",&unknown->age);

        puts("請輸入身高:");
        scanf("%d",&unknown->height);

        puts("請輸入體重:");
        scanf("%d",&unknown->weight);

	puts("請輸入DNA :");
        scanf("%s",&unknown->DNA);

	return unknown->DNA;
}

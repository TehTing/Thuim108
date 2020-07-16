#include<stdio.h>
#include<string.h>

/*問題描述：

給定一行文字，請你幫忙列出 ASCII 字元的出現頻率。
你可以假設 ASCII 前 32 個字元以及後 128 個字元不會出現。
每一行文字的後面以 ’\n’ 結束，但是不用把那個字元考慮進去。

輸入說明：
由使用者手動輸入 n 個字元，並按下 enter 鍵結束輸入。

輸出說明：
對於每一行輸入，根據出現的 ASCII 值大小印出 ASCII 字元， ASCII 值比較大的優先印出。*/
int fun(char arr[],int,int);
int main()
{
	char str[10], x;
	int len;
	gets(str);	//輸入字串
	len = strlen(str);	//計算長度
	for (int i = 0; i < len; i++) {		//排序
		for (int j = i + 1; j < len; j++) {
			if (str[i] < str[j]) {
				x = str[i];
				str[i] = str[j];
				str[j] = x;
			}
		}
	}
	fun(str,0,len);

}

int fun(char arr[],int i,int len) 
{
	int sum = 1;
	int j;
	while(i < len) {
		j = i + 1;
			if (arr[j] == arr[i]) {
				sum += 1;
				continue;
			}
			else {
				printf("%d %d\n", arr[i], sum);
				break;
			}
/*		for (int j = i + 1; j < len; j++) {
			if (arr[j] == arr[i]) {
				sum += 1;
			}
			else {
				printf("%d %d\n", arr[i], sum);
				fun(arr, j, len);
			}
		}
		*/
	}
	fun(arr, j, len);
}
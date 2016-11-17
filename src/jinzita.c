#include <stdio.h>

int main(void){
	int i , j , k , line;
	printf("请输入金字塔行数：");
	scanf("%d",&line);
	if (line <= 0)
	{
		printf("输入有误，请重新输入！\n");
		return 1;
	}
	i = 0;
	while (i < line){
		j = line;
		while (j > i){
			printf(" ");
			j--;
		}
		k = 0;
		while (k < 2 * i + 1){
			printf("*");
			k++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
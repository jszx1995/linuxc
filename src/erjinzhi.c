#include <stdio.h>
int main(void){
	int value;
	printf("请输入一个十进制数：");
	scanf("%d",&value);
	int i = sizeof(value) * 8 - 1;
	for(;i >= 0;i--){
		int bit = value >> i & 1;
		printf("%d",bit);
	}
	printf("\n");
	return 0;
}
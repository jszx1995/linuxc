#include <stdio.h>

int main(void){
	int person[10];
	int i;
	printf("请输入10个年龄：\n");
	for(i = 0; i < 10; i++){
		scanf("%d",&person[i]);
	}
	int age[11];
	for(i = 0; i < 11; i++){
		age[i] = 0;
	}
	for(i = 0; i < 10; i++){
		int k = person[i] / 10;
		if (k >= 10){
			age[10]++;
		}else{
			age[k]++;
		}
	}
	for(i = 0; i < 11; i++){
		printf("age[%d]:%d\n",i,age[i]);
	}
	return 0;
}
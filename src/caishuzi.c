/*精简猜数字*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	char c;
	int i, number;
	time_t a, b;
	int k;
	srand(time(NULL));
	printf("要玩游戏请输入y或n：\n");
	while((c = getchar()) == 'y'){
		if (c == 'y'){
			i = rand() % 100;
			a = time(NULL);
			printf("请输入你猜的数字：\n");
			scanf("%d",&number);
			while(number != i){
				if (number > i){
					printf("请输入更小的数字：\n");
					scanf("%d",&number);
				}else{
					printf("请输入更大的数字：\n");
					scanf("%d",&number);
				}
			}
		}
	}
	b = time(NULL);
	printf("你共花了%d秒的时间!\n",k = b - a);
return 0;
}

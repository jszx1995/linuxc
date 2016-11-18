/*简单打地鼠游戏*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	int times = 0;//打老鼠的次数
	int i;
	int mousex = 0;
	int mousey = 0;
	int posx = 0;
	int posy = 0;
	int hits = 0;//击中的次数
	int missed = 0;//击错的次数
	int row,col;
	printf("请输入要打老鼠的次数：");
	scanf("%d",&times);
	printf(" □ □ □\n □ □ □\n □ □ □\n");
	srand((unsigned)time(0));
	for(i = 0;i < times;i++){
		mousex = rand() % 3 + 1;
		mousey = rand() % 3 + 1;
		do{
			printf("请输入锤子的坐标：");
			scanf("%d%d",&posx,&posy);
		}while(posx < 1 || posx > 3 || posy < 1 || posy > 3);
		if (mousex == posx &&mousey == posy){
			hits++;
		}else{
			missed++;
		}
		for(row = 1;row < 3 + 1;row++){
			for(col = 1;col < 3 + 1;col++){
				if (row == posy && col == posx){
					printf(" ※");		
				}else if(row == mousey && col == mousex){
					printf(" △");
				}else{
					printf(" □");
				}
			}
				printf("\n");
		}
			printf("击中%d次，击错%d次\n",hits,missed);
	}
return 0;
}

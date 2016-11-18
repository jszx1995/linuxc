/*猜拳游戏*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define WAGER 10 //赌注10元一次
typedef enum{STONE,SCISSOR,CLOTH} HAND;//石头，剪刀，布

HAND GetUserHand(){
	int choose;
	printf("该你出拳了，可选手形（1.石头 2.剪刀 3.布），请选择相应的编号：");
	while (1 !=scanf("%d",&choose) || choose < 1 || choose > 3){
		printf("输入错误，请重新选择！\n");
		fflush(stdin);
	        printf("该你出拳了，可选手形（1.石头 2.剪刀 3.布），请选择相应的编号：");
	}
	return STONE + choose - 1;//1+3-1 == 3
}

int Play(HAND sys_hand,HAND user_hand){
	if(sys_hand == user_hand){
		return 0;
	}
		switch(sys_hand){
			case STONE:
				return user_hand == CLOTH ? 1 : -1;
			case SCISSOR:
				return user_hand == STONE ? 1 : -1;
			case CLOTH:
				return user_hand == SCISSOR ? 1 : -1;
		}
}
int main(void){
	int sys_money;

	int user_money;

	HAND sys_hand;

	HAND user_hand;

	int result;
	char * hs[] = {"石头","剪刀","布"};
	srand((unsigned)time(0));//初始化随机种子
	sys_money = user_money = 30;//初始系统玩家和我们的金额都为30元
	while(1){
		sys_hand = STONE + rand() % 3;
		user_hand = GetUserHand();
		result = Play(sys_hand,user_hand);
		if (result == 0)
			printf("双方都选择了[%s],打成平手！\n",hs[sys_hand]);
		else if (result == 1){
			printf("系统：[%s],你[%s],你赢了！\n",hs[sys_hand],hs[user_hand]);
		        sys_money -= WAGER;
			user_money += WAGER;
		}else{
			printf("系统：[%s],你[%s],你输了！\n",hs[sys_hand],hs[user_hand]);
			sys_money += WAGER;
			user_money -=WAGER;
		}
		printf("-------------------------------------\n");
		printf("当前系统玩家余额：%d,你的余额：%d.\n",sys_money,user_money);
		printf("-------------------------------------\n");
		if (sys_money > 0 && user_money > 0)
			getchar();
		else
			break;
	}
	if (sys_money <= 0)
		printf("系统被你彻底打败！\n");
	else
		printf("你被系统赢得体无完肤！\n");
return 0;
}


/*此题是模拟银行输入密码*/
#include <stdio.h>
#include <unistd.h>//windows.h

int main(void){
	int pass, i = 0, p = 5;
	//pass为密码，i为输入错误密码次数p是5秒时间退出或进入系统
	printf("请注意周边环境，再输入密码：\n");
	while( pass != 123456 ){ //当pass不等于123456时，一直死循环
		scanf("%d",&pass);
		if (pass != 123456){
			printf("输入密码错误%d次\n",++i);
		}
		if (i >= 3){
			printf("对不起，你的卡被取款机吃了，请去柜台！\n");
			while (i == 3 && p >= 0){ 
				printf("\r%d秒退出系统……\n",p--);
				sleep(1);//windows是大写
			}
		return -1;
		}
	}
	if (pass == 123456){
		printf("密码正确，进入系统中…\n");
		while(p >= 0){
			printf("\r%d秒进入系统……\n",p--);
			sleep(1);
		}
	}	
return 0;
}

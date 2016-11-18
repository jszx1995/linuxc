/*此题由于头文件不可以在linux下用，编译不成功*/
#include <stdio.h>
#include <unistd.h>
//#include <conio.h>
#include <stdlib.h>

int a = 0, b = 20;

void GamePosition(HANDLE hout,int x,int y){//1.定坐标
	COORD pos;//点的结构体变量
	pos.X = x;//大写的X是点的结构体的内部成员
	pos.Y = y;
	SetConsoleCursorPosition(hout,pos);//设置控制平台光标位置
}
int main(void){
	HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);//设置一张白纸
	GamePosition(hout,a,b);//调用定义好的坐标
	printf("※");//作图
	while(1){
		if (kbhit())//按下键盘
		switch (getchar()){//接收按下去的键盘，实现左右上下移动
			case 'w':
			case 'W':
				if (b > 3){
					GamePosition(hout,a,b);
					printf(" ");
					GamePosition(hout,a,--b);
					printf("※");
				}
				break;
			case 's':
			case 'S':
				if (b < 20){
					GamePosition(hout,a,b);
					printf(" ");
					GamePosition(hout,a,++b);
					printf("※");
				}
				break;
			case 'a':
			case 'A':
				if (a > 0){
					GamePosition(hout,a,b);
					printf(" ");
					GamePosition(hout,--a,b);
					printf("※");
				}
				break;
			case 'd':
			case 'D':
				if (a < 20){
					GamePosition(hout,a,b);
					printf(" ");
					GamePosition(hout,++a,b);
					printf("※");
				}
				break;
		}
	}
return 0;
}

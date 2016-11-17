#include <stdio.h>

unsigned short int zuoxuanzhuan(unsigned short int i,int j){
	return (i >> j) | (i << (16 - j));
}
unsigned short int youxuanzhuan(unsigned short int i,int j){
	return (i << j) | (i >> (16 - j));
}
int main(void){
	unsigned short int x = 0x23d5;
	printf("%#x左旋转为%#x\n",x,zuoxuanzhuan(x,4));
	printf("%#x右旋转为%#x\n",x,youxuanzhuan(x,4));
	return 0;
}
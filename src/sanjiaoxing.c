#include <stdio.h>
int main(void) {

	int a , b , c , t;
	printf("请输入3个整数用空格隔开：");
	scanf("%d%d%d", &a , &b , &c);
	//printf("%s\n",a > 0 && ( a + b > c ) && ( a + c > b ) && ( b + c > a ) ? "能够成三角形" : "不能够成三角形");

	//排序
	if (a > b) {
		t = a ;
		a = b ;
		b = t ;
	}
	if (a > c) {
		t = a ;
		a = c ;
		c = t ;
	}
	if (b > c) {
		t = b ;
		b = c ;
		c = t ;		
	}
	//判断是什么三角形
	if (a + b > c && a > 0) {
		int des = a * a + b * b - c * c ;
		printf("能够成");
		if ( des == 0) {
			printf("直角");
		} else {
			if ( des > 0) {
				if (a == c) {
					printf("等边");
				}else {
					if (a == b || b == c) {
						printf("等腰");
					}
					printf("锐角");					
				}
			} else {
				if (a == b) {
					printf("等腰");
				} 
				printf("钝角");
			}
		}
		printf("三角形\n");
	} else {
		printf("请重新输入三角形三边\n");
	}
	return 0; 
}

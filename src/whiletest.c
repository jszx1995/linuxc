#include <stdio.h>

int main(void){
//最大公约数最小公倍数
	int n1, n2, t;
	scanf("%d %d",&n1,&n2);
	int n1_ = n1, n2_ = n2;
	
	while ((t = n1 % n2) != 0){
		n1 = n2;
		n2 = t;
	}

//统计字符数
	// int n = 0;
	// char c;
	// do{
	// 	c = getchar();
	// 	n ++;
	// } while(c != '\n');
//计算成绩
	// int cj , zf = 0;
	// while ( scanf("%d",&cj) && ( 0 <= cj && cj <= 100 )){
	// 	zf += cj;
	// }
	
	printf("最大公约数：%d\n最小公倍数：%d\n",n2, n1_ / n2 * n2_ );
	return 0;
}
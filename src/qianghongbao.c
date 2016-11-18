#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
	float a[11];//保存10个红包金额
	float total = 100;//红包总额
	int num = 10;//分10份
	float min = 0.01;//最小
	int i;
	float t;//平均值
	float safe_total = 0;//跳跃值
	float sum = 0;
	float max = 0;
	int f;
	srand(time(0));//随机值	
	for (i = 1;i < num;i++){
		t = total / (10 - i + 1);//平均值
		safe_total = t * 2;//跳跃值
		a[i] = (rand() % (int)(safe_total * 100) + (int) min * 100) / 100.0 + 0.01;//乘100除100为了小数点值
		total -= a[i];//累计发出的红包金额
		sum += a[i];//累计取走的红包金额
		printf("第%d个红包有%0.2f元\n",i,a[i]);
	}
		for (i = 1;i <= num;i++){
			if(a[i] > max){
				max = a[i];
				f = i;
			}
		}
	printf("恭喜第%d个红包获得运气王，金额%0.2f元\n",f,max);
return 0;
}

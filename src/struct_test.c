#include <stdio.h>

typedef
	struct 
	{
		int fz;
		int fm;
	} FS;

void qiu_he(FS *,int);
void yuefen(FS *);
int q_gys(int,int);
void shuchu2(FS const *);

int main(void) {
	FS he = {0,1};
	int n;
	scanf("%d",&n); 

    qiu_he(&he,n);

	shuchu2(&he);
	return 0;
}

//输出
void shuchu2( FS const * p_fs){
	printf("分数结果：%d/%d\n",p_fs -> fz,p_fs -> fm); 
	printf("小数结果：%f\n",(double)(p_fs -> fz)/(p_fs -> fm)); 
}

//约分
void yuefen(FS *p_fs){
	int gys = q_gys(p_fs -> fz,p_fs -> fm); 
	p_fs -> fm /= gys;
	p_fs -> fz /= gys;
}

//最大公约数
int q_gys(int m,int n){
	int ys;
	while((ys = m % n) != 0){	
		m = n;
		n = ys;
	}
	return n;
}

//求和
void qiu_he(FS *p_h,int n){
	int i;
	for(i = 0 + 1;i < n + 1;i++){		
		p_h -> fz = p_h -> fz * i + 1 * p_h -> fm;
		p_h -> fm = p_h -> fm * i;
		yuefen(p_h);
    }
}
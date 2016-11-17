#include <stdio.h>

int q_fz(int fz1, int fm1, int fz2, int fm2);
int q_fm(int i,int fm);
int q_gys(int fz,int fm);
void print(int fz,int fm);
void yuefen(int *,int *);
void q_fz_fm(int n,int * pfz,int * pfm);

int main (void){
	int n ;
	int fz = 0, fm = 1;
	printf("请输入1个数：\n");
	scanf("%d",&n);

	q_fz_fm(n,&fz,&fm);		

	print(fz,fm);	
	
	return 0;
}

//求分子分母
void q_fz_fm(int n,int * pfz,int * pfm){
	int i;
	for(i = 0 + 1; i < n + 1; i++){
		*pfz = q_fz( 1, i, * pfz, * pfm);
		*pfm = q_fm(i,* pfm);
		yuefen(pfz,pfm);	
		//yuefen(& * pfz,& * pfm);
	}
}

//求分子
int q_fz(int fz1, int fm1, int fz2, int fm2){	
	return fz1 * fm2 + fz2 * fm1;
}

//求分母
int q_fm(int fm1,int fm2){
	return fm1 * fm2;
}

//求最大公约数
int q_gys(int fz,int fm){
	int t;
	while ((t = fz % fm) != 0){
		fz = fm;
		fm = t;
	}
	return fm;
}

//约分
void yuefen(int * p_fz,int * p_fm){
	int gys = q_gys(* p_fz,* p_fm);
		* p_fz /= gys ;
		* p_fm /= gys ;
}

//输出
void print(int fz,int fm){
	printf("结果为%d/%d\n",fz , fm );	
	printf("小数为%f\n",(double) fz / (double) fm );		
}

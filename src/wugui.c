#include <stdio.h>

//double q_lc(double n);
int q_fz(int fz1, int fm1, int fz2, int fm2);
int q_fm(int i,int fm);
int q_gys(int fz,int fm);
void print(int fz,int fm);
void yuefen(int *,int *);

int main (void){
	int n , i;
	int fz = 0, fm = 1;
	printf("请输入1个数：\n");
	scanf("%d",&n);
	for(i = 0 + 1; i < n + 1; i++){
		fz = q_fz( 1, i, fz, fm);
		fm = q_fm(i,fm);
		yuefen(& fz,& fm);		
	}
	print(fz,fm);	
	//printf("%f\n",q_lc(n));
	return 0;
}

// double q_lc(double n){
// 	int i;
// 	double sum = 0;
// 	for(i = 0 + 1; i < n + 1; i++)
// 		sum += 1. / (double) i;
// 	return sum;
// }

int q_fz(int fz1, int fm1, int fz2, int fm2){	
	return fz1 * fm2 + fz2 * fm1;
}

int q_fm(int fm1,int fm2){
	return fm1 * fm2;
}

int q_gys(int fz,int fm){
	int t;
	while ((t = fz % fm) != 0){
		fz = fm;
		fm = t;
	}
	return fm;
}

void yuefen(int * p_fz,int * p_fm){
	int gys = q_gys(* p_fz,* p_fm);
		* p_fz /= gys ;
		* p_fm /= gys ;
}

void print(int fz,int fm){
	printf("结果为%d/%d\n",fz , fm );	
	printf("小数为%f\n",(double) fz / (double) fm );		
}

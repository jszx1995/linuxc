#include <stdio.h>

void q_zhiqian(int, int *, int *);
void print(int *,int);		//int [],int
void fuzhi(int *,int,int);	//int [],int,int

int main(void)
{
	int xd[6];
	int i;
	fuzhi(xd,6,2520);	
	for (i = 0;i < 6;i++){
		//q_zhiqian(i + 3 ,& xd[5 - i], & xd[(6 - i) % 6]);
		q_zhiqian(i + 3 ,xd + (5 - i), xd + (6 - i) % 6);
	}
	print(xd,6);	
	return 0;
}
//赋值
void fuzhi(int * fzarr,int n,int zs){ 
//void fuzhi(int fzarr[],int n, int zs){
	int i;
	for (i = 0;i < n;i++){
		* (fzarr + i) = zs / n;       
		//fzarr[i] = zs / n;
	}
}
//输出
void print(int * ptarr,int n){		
//void print(int ptarr[],int n){
	int i;
	for (i = 0;i < n;i++){
		printf("%d ",* (ptarr + i));		
		//printf("%d ",ptarr[i]);	
	}
	putchar('\n');	
}
//求之前数之后数
void q_zhiqian(int n, int * z_h, int * z_q){
	*z_h = *z_h * n / (n-1);
	*z_q = *z_q - *z_h / n;
}
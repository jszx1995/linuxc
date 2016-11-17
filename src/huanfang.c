#include <stdio.h>

void tianxie(int (*)[19],int);
void print(int (*)[19],int);
void tianxie_xsz(int (*)[19],int *,int *,int);

int main (void){
	int hf [19][19] = { 0 };
	int n;
	printf("请输入一个小于19的数：");
	scanf("%d",&n);
	tianxie(hf,n);
	print(hf,n);
	return 0;
}
//填写数值
void tianxie(int (*hf)[19],int n){
	int hang = 0,lie = n / 2;
	int m = 1;		
	do{
		hf[hang][lie] = m;
		tianxie_xsz(hf,& hang,& lie, n);		
		m++;
	} while (m <= n * n);	
}
//输出
void print(int (*hf)[19],int n){
//void print(int hf[][19],int n){
	int i,j;
	for (i = 0;i < n; i++){
		for (j = 0; j < n; j++){
			//printf("%3d ",hf[i][j]);
			printf("%3d ",( * (hf + i))[j]);
		}
		putchar('\n');
	}
}
//填写新数
void tianxie_xsz(int (*hf)[19],int *hang ,int *lie, int n){
	int h_ = (*hang - 1 + n) % n;
	int l_ = (*lie + 1) % n;
	if (hf[h_][l_] != 0){
		*hang = (*hang + 1) % n;
	}else{
		*hang = h_;
		*lie = l_;
	}	
}


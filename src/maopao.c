#include <stdio.h>

void out(int a[],int n){
	int i;
	for(i = 0;i < n; i++)
		printf("%d ",a[i]);
	printf("\n");
}
int main(void){
	int a[10];
	printf("请输入要排序的10个数：\n");
	int k;
	for(k = 0; k < 10; k++){
		scanf("%d",&a[k]);
	}
	int n = sizeof(a)/4;
	int i, j;
	for(i = 0; i < n - 1; i++){
		for(j = n - 1; j > i; j--){
			if (a[j] < a[j-1] ){
				int temp;
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
	out(a,n);
	
	return 0;
}
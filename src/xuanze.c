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
	for(i = 0;i < n - 1; i++){
		int pos = i;
		for(j = i + 1; j < n; j++){
			if (a[j] < a[pos])
				pos = j;
		}
		if (pos != i){
			int temp = a[pos];
			a[pos] = a[i];
			a[i] = temp;
		}
	}	
	out(a,n);
	return 0;
}
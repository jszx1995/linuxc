#include <stdio.h>

int main (void){
	int yh[20][20];
	int i, j;
	for (i = 0; i < 20; i++){
		for (j = 0;j < 20; j++){
			yh[i][j] = 0;
		}
	}
	int row, k;
	printf("请输入1到20的整数：");
	scanf("%d",&row);
	for (i = 0; i < row; i++){
		for (k = row; k > i; k--){
			printf("   ");
		}
		for (j = 0; j <= i; j++){
			if (j == 0 || j == i)
				yh[i][j] = 1;
			else
				yh[i][j] = yh[i - 1][j - 1] + yh[i - 1][j];
			printf("%6d",yh[i][j]);
		}
		printf("\n");
	}
	return 0;
}
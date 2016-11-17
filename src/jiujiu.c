#include <stdio.h>

int main(void){
	int i , j ;
	for (i = 1; i < 10; i++){
		for (j = 1; j <= i; j++){
			int k = i * j;
			printf("%d*%d=%d\t",j,i,k);
		}
		printf("\n");
	}
	return 0;
}
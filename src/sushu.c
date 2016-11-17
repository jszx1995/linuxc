#include <stdio.h>

int main(void)
{
	int m , i , h = 0;
	for(m = 2 ; m < 100 ; m++){
		int temp = 1;
		for(i = 2 ; i < m ; i++){
			if (m % i == 0){
				temp = 0;
				break;
			}
		}
		if (temp){
			printf("%-4d  ",m);
			h++;
			if (h % 5 == 0)
				printf("\n");
		}
	}
	printf("\n");
	return 0;
}

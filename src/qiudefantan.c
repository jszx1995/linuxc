/*球的反弹原理*/
#include <stdio.h>
#include <unistd.h>
void ball(){
	printf("\t\t\t\t□\n");
}
int main(void){
	int h = 20;
	int i, j;
	int dir = 1;
	while (h > 0){
		if (dir == 1){
			for(i = 20 - h;i < 20;i++){
				system("cls");
				for(j = 0;j <= i;j++){
					printf("\n");
				}
				ball();
				sleep(1);
			}
			dir = 0;
		}else{
			dir = 1;
			h = h * 8 / 9;
			for(i = 20;i >= 20 - h;i--){
				system("cls");
				for(j = 0;j <= i;j++){
					printf("\n");
				}
				ball();
				sleep(1);
			}
		}
	}
return 0;
}

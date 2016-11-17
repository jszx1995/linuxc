#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int year , yue , ri;
	int dijitian = 0;
	printf("请输入年月日：");
	scanf("%d%d%d",&year,&yue,&ri);
	if ( ri < 0 ){
		printf("日期输入错误！\n");
		return EXIT_FAILURE;
	}
	switch ( yue ){
		default :
			printf("输入的年份不正确!\n");
			return EXIT_FAILURE;
			break;
		case 12:
		case 10:
		case 8:
		case 7:
		case 5:
		case 3:
		case 1:
			if (ri > 31){
				printf("输入的日期不正确！\n");
				return EXIT_FAILURE;
			}
			break;
		case 11:
		case 9:
		case 6:
		case 4:
			if (ri > 30){
				printf("输入的日期不正确！\n");
				return EXIT_FAILURE;
			}
			break;
		case 2:
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
				if (ri > 29){
					printf("输入的日期不正确！\n");
					return EXIT_FAILURE;
				}
			}else{
				if (ri > 28){
					printf("输入的日期不正确！\n");
					return EXIT_FAILURE;
				}
			}
			break;
	}

	switch ( yue ){
		case 12:
		dijitian += 30;
		case 11:
		dijitian += 31;
		case 10:
		dijitian += 30;
		case 9:
		dijitian += 31;
		case 8:
		dijitian += 31;
		case 7:
		dijitian += 30;
		case 6:
		dijitian += 31;
		case 5:
		dijitian += 30;
		case 4:
		dijitian += 31;
		case 3:
			if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
				dijitian += 29;
			}else{
				dijitian += 28;
			}		
		case 2:
		dijitian += 31;
		case 1:
		dijitian += ri;
		printf("%d年%d月%d日为这一年的第%d天\n",year,yue,ri,dijitian);
	}
	return 0;
}
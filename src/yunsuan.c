#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int num1 , num2;
	char op;
	printf("请输入算式：");
	if (scanf("%d %c %d",&num1,&op,&num2) < 3){
		printf("输入有错误\n");
		return EXIT_FAILURE;
	}
	switch ( op ){
		default :
			printf("不认识运算符！\n");
			break ;
		case '+':
			printf("%d %c %d = %d\n",num1,op,num2,num1 + num2);
			break ;
		case '-':
			printf("%d %c %d = %d\n",num1,op,num2,num1 - num2);
			break ;
		case '*':
			printf("%d %c %d = %d\n",num1,op,num2,num1 * num2);
			break ;
		case '/':
			if (num2 != 0){
				if (num1 % num2){
					printf("%d %c %d = %d......%d\n",num1,op,num2,num1 / num2,num1 % num2);
				}else{
					printf("%d %c %d = %d\n",num1,op,num2,num1 / num2);
				}			
			}else{
				printf("输入有误！\n");
			}		
			break ;
	}
	return 0;
}
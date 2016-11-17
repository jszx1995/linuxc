#include <stdio.h>
#include "andymath.h"

int get_option();
void print_reslut(int num1, int num2, int op, int reslut);

int main(void)
{
	int done = 0;
	int num1, num2, op, reslut;
	while (!done){
		op = get_option();
		if (op == 5){
			done = 1;
		}else{
			do{
				printf("输入要计算的两个整数：\n");
				scanf("%d %d",&num1,&num2);
				if (op == 4 && num2 == 0){
					printf("输入有误!!\n");
				}
			}while(op == 4 && num2 == 0);

			switch (op){
				case 1:
					reslut = add(num1,num2);
					break;
				case 2:
					reslut = sub(num1,num2);
					break;
				case 3:
					reslut = mul(num1,num2);
					break;
				case 4:
					reslut = div(num1,num2);
					break;
			}
			print_reslut(num1,num2,op,reslut);
		}		
	}
	return 0;
}

int get_option(){
	int op;
	do{
		printf("××××××××××××××计 算 器×××××××××××××\n");
		printf("×××××××××××请 选 择 1～5×××××××××××\n");
		printf("××××××××××× 1.加法运算 ××××××××××××\n");
		printf("××××××××××× 2.减法运算 ××××××××××××\n");
		printf("××××××××××× 3.乘法运算 ××××××××××××\n");
		printf("××××××××××× 4.除法运算 ××××××××××××\n");
		printf("××××××××××× 5.退出计算器 ××××××××××\n");
		printf("×××××××××××××××××××××××××××××××××××\n");

		printf("请选择要运算的序号：\n");
		scanf("%d",&op);
		
		if (op < 1 || op > 5){
			printf("输入不在范围内！\n");
			return 1;
		}
	}while(op < 1 || op > 5);
	return op;
}

void print_reslut(int num1, int num2, int op, int reslut){
	char ofchar;
	switch (op){
		case 1:
			ofchar = '+';
			break;
		case 2:
			ofchar = '-';
			break;
		case 3:
			ofchar = '*';
			break;
		case 4:
			ofchar = '/';
			break;
	}			
	if (num1 % num2 && op ==4){
		printf("%d %c %d = %d......%d\n",num1,ofchar,num2,reslut,num1 % num2);
	}else{
		printf("%d %c %d = %d\n",num1,ofchar,num2,reslut);
	}				
}
	
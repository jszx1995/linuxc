#include <stdio.h>

int q_hao(char);
int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int (* q_ys(char))(int,int);

int main(void){
	int m , n ;
	char op;
	scanf("%d %c %d",&m,&op,&n);
	// int (* ys[4])(int,int) = {add,sub,mul,div};
	// printf("%d %c %d = %d\n",m,op,n,ys[q_hao(op)](m,n));
	printf("%d %c %d = %d\n",m,op,n,(* q_ys(op))(m,n));
	return 0;
}

int (* q_ys(char c))(int,int){
	switch (c){
		case '+': return add;
		case '-': return sub;
		case '*': return mul;
		case '/': return div;
	}
}

/*int q_hao(char c){
	switch (c){
		case '+': return 0;
		case '-': return 1;
		case '*': return 2;
		case '/': return 3;
	}
}*/

int add(int i, int j){
	return i + j;
}

int sub(int i, int j){
	return i - j;
}

int mul(int i, int j){
	return i * j;
}

int div(int i, int j){
	if (j == 0){
		printf("输入错误！\n");
		return 1;
	}
	return i / j;
}
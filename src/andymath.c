#include <stdio.h>
#include "andymath.h"

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
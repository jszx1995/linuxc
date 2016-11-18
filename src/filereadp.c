#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void){
	long size;
	long sum = 0;
	long len;
	FILE *pFile = NULL;//文件指针
	int i;
	int progress = 20;//进度条的长度
	int current = 0;//当前进度
	char content[3000] = {0};//用于存文件内容
	char tmp[100];
	pFile = fopen("src/test.c","rb");
	if (pFile == NULL){
		printf("文件打开失败！现在退出程序。\n");
		return -1;
	}
	fseek(pFile,0,SEEK_END);//把文件指针定位到文件结尾
	size = ftell(pFile);//把文件大小赋给size保存
	rewind(pFile);
	srand((unsigned)time(0));//初始化随机
	while (!feof(pFile)){//把真变假，假变真
		len = fread(tmp,1,rand() % 100,pFile);//最小读0字，最多99
		tmp[len] = '\0';//添加字符串结束标记
		sum += len;//记录总读取量
		strcat(content,tmp);//加到content中
		//进度条
		//计算当前进度
		current = sum / (size / progress);
		//打印进度条
		printf("\r");
		for (i = 0;i < progress;i++){
			if (i < current)
				printf(">");
			else
				printf("□");
		}
		printf("[%6.2f%%]",(float)sum / size * 100);
		sleep(1);
	}
	fclose(pFile);
	printf("----------------------------------------------------\n");
	printf("%s\n",content);
return 0;
}

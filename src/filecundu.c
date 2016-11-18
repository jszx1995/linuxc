/*文件存储与读取*/
#include <stdio.h>
int main(void){
	FILE * fp1;
	int i, j, k;
	char str[512], ch;
	FILE * fp = fopen("src/test.txt","w+");//w表示写入，+表示文件存在就清空，不存在创建
	for(i = 0;i < 5;i++){
		for(j = 0; j < 6 - i;j++)
			fwrite(" ",1,1,fp);
		for(k = 1;k <= 2 * i + 1;k++)
			fwrite("*",1,1,fp);
		fwrite("\n",1,1,fp);
	}
	fclose(fp);
	fp1 = fopen("src/test.txt","r");
	for(i = 0;(ch = fgetc(fp1)) != EOF;i++){//EOF表示文件结尾
		str[i] = ch;
		putchar(str[i]);
	}
fclose(fp1);
return 0;
}

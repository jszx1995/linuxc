/*模拟微软寻找并删除文件*/
#include <stdio.h>
void func(char [],int);
int main(void){
	char st[] = "abcdefgabcd";
	char * ps;
	char ch;//要删除的文件名
	int i ,j = 0;//j是统计文件名出现次数
	printf("文件中有：%s\n",st);
	
  	ps = st;
	for(i = 0;ps[i] != '\0';i++)
		if(ps[i] == 'a')
			printf("文件名为'a'文件出现%d次\n",++j);
		if(j == 0)
			printf("文件名'a'没有出现过\n");
		printf("文件名a共出现%d次\n",j);
		
	printf("请输入要删除的文件:\n");
	scanf("%c",&ch);
	func(st,ch);
	printf("没有删除的文件名有:%s\n",st);
return 0;
}

void func(char s[], int c){
	char *q = s;
	for(;*q != '\0';q++)
		if(*q != c){
			*s = *q;
			s++;
		}
//			*(s++) = *q;
		*s = 0;
}

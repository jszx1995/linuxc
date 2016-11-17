#include <stdio.h>
int my_strcmp (char *,char *);
int main(void){
	printf("%d\n",my_strcmp ("ABc","Abc"));
	return 0;
}

int my_strcmp (char * str1,char * str2){
	while (*str1 == *str2){
		if (*str1 == '\0'){
			return 0;
		}
		str1++;
		str2++;		
	}	
	return *str1 > *str2 ? 1 : -1;
}
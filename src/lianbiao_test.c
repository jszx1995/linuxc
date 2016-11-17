#include <stdio.h>
#include <stdlib.h>

struct node
{
	int n;
	struct node * xyg ;
};
void shuchu(struct node *);
void charu(int,struct node * * );
void shanchu(struct node * * );
int main(void){
	struct node * tou = NULL;	
	//struct node * p = NULL;
	charu(5,&tou);
	charu(3,&tou);
	charu(2,&tou);
	// tou = malloc(sizeof(struct node));
	// tou -> n = 5;
	// tou -> xyg = NULL;
	// struct node * p = NULL;
	// p = malloc(sizeof(struct node));
	// p -> n = 8;
	// p -> xyg = tou;
	// tou = p;
	shuchu(tou);
	shanchu(&tou);
	shuchu(tou);

	return 0;
}
void shuchu(struct node * h){
	if (h != NULL){
		printf("%d\n",h -> n);
		shuchu(h = h -> xyg);
	}	
}
void charu(int n,struct node * * p_h){
	struct node * p = NULL;
	p = malloc(sizeof(struct node ));
	p -> n = n;
	p -> xyg = *p_h;
	*p_h = p;
}
void shanchu(struct node * * p_h){
	if (* p_h != NULL){
		struct node * p = *p_h;
		* p_h = p -> xyg;
		free(p);
	}	
}
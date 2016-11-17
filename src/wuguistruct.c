#include <stdio.h>

struct fs
{
	int fz;
	int fm;
};

void shuchu(struct fs); 
struct fs q_he(struct fs,int);
void qiu_he(struct fs *,int);
void yuefen(struct fs *);
int q_gys(int,int);
void shuchu2(struct fs const *);

int main(void) {
	struct fs he = {0,1};
	int n;
	scanf("%d",&n); 
    qiu_he(&he,n);
	//he = q_he(he,n);  

//	for(i = 0 + 1;i < n + 1;i++){
//		he.fz = he.fz * i + 1 * he.fm;
//		he.fm = he.fm * i;
//  //约分
//	yuefen(&he);
//	} 
	//输出
//	shuchu(he); 
	shuchu2(&he);
//	printf("%d / %d\n",he.fz,he.fm); 
	return 0;
}

//void shuchu(struct fs s){
//	printf("%d/%d\n",s.fz,s.fm);
//} 
void shuchu2( struct fs const *p_fs){
	printf("分数结果：%d/%d\n",p_fs -> fz,p_fs -> fm); 
	printf("小数结果：%f\n",(double)(p_fs -> fz)/(p_fs -> fm)); 
}

void yuefen(struct fs *p_fs){
	int gys = q_gys(p_fs -> fz,p_fs -> fm); 
	p_fs -> fm /= gys;
	p_fs -> fz /= gys;
} 
int q_gys(int m,int n){
	int ys;
	while((ys = m % n) != 0){	
		m = n;
		n = ys;
	} 
	return n;
} 
/*
struct fs q_he(struct fs h,int n){
	int i;
	for(i = 0 + 1;i < n + 1;i++){		
		h.fz = h.fz * i + 1 * h.fm;
		h.fm = h.fm * i;
    } 
	return h;
}
*/
void qiu_he(struct fs *p_h,int n){
	int i;
	for(i = 0 + 1;i < n + 1;i++){		
		p_h -> fz = p_h -> fz * i + 1 * p_h -> fm;
		p_h -> fm = p_h -> fm * i;
		yuefen(p_h);
    }
} 
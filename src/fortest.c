#include <stdio.h>
#define YES 1
#define NO 0

//int meiyou4( int num );
int meiyou(int N,int d);
int jsge( int N, int d);

int main(void)
{
	int N, d;
	printf("输入一个数N，计算没有n的个数：");
	scanf("%d%d",&N,&d);
	printf("%d\n",jsge( N, d));

//用函数除去没有4
	// int i;
	// int N;
	// printf("输入一个数，计算没有4的个数：");
	// scanf("%d",&N);
	// int zs = 0;
	// for(i = 0 + 1; i < N + 1; i++){		
	// 	if (meiyou4( i ) == YES){
	// 		zs++;
	// 	}		
	// }
//除去有4的数
	// int i;
	// int N;
	// printf("输入一个数，计算没有4的个数：");
	// scanf("%d",&N);
	// int zs = 0;
	// for(i = 0 + 1; i < N + 1; i++){
	// 	int you4 = 0;
	// 	int i_ = i;
	// 	while(i_ != 0){
	// 		if (i_ % 10 == 4){
	// 			you4 = 1;
	// 			break;
	// 		}
	// 		i_ /= 10;
	// 	}
	// 	if (you4 == 1){
	// 		continue;
	// 	}
	// 	zs++;
	// }
//斐波那契数
	// int  f1,f2 = 1,f3 = 1;
	// int i, n;
	// scanf("%d",&n);
	// for (i = 0 ; i < n ; i++ ){
	// 	f1 = f2;
	// 	f2 = f3;
	// 	f3 = f1 + f2;
	// }

	//printf("%d\n",zs);
	return 0;
}

// int meiyou4(int num){ 		
// 	do{		
// 		if (num % 10 == 4){
// 			return NO;
// 		}				
// 	}while ((num /= 10) != 0);	
// 	return YES; 	
// }

int meiyou(int N,int d){
	do{		
		if (N % 10 == d){
			return NO;
		}				
	}while ((N /= 10) != 0);	
	return YES; 	
}

int jsge( int N, int d ){
	int zs = 0 ;
	while ( N > 0 ){
		if (meiyou(N,d) == YES){
			zs++;
		}
		N--;
	}
	return zs;
}
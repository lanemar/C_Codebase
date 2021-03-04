/*
	计算在100以内奇数和偶数的个数。 
*/

#include <stdio.h>

int main(void){
	int odd=0,even=0;
	int i;
	int oddsize=0,evensize=0;//个数
	int oddvalue=0,evenvalue=0;//平均数 
	for(i=1;i<=100;i++){
		printf("第%d次：",i); 
		printf("i=%d\n",i); 
		printf("-------------------------\n");
		if(i%2==1){
			odd=odd+i;
			printf("奇数,加odd\n");
			oddsize++;//奇数个数加1 
		}else if(i%2==0){
			even=even+i;
			printf("偶数,加even\n"); 
			evensize++;//偶数个数加1 
		}
		printf("odd=%d,even=%d\n",odd,even);
		printf("-------------------------\n");
		printf("\n"); 
	}
	printf("odd=%d,even=%d\n",odd,even);
	printf("奇数的个数为：%d\n",oddsize);
	printf("偶数的个数为：%d\n",evensize);
	oddvalue=odd/oddsize;//奇数的平均数 
	evenvalue=even/evensize;//偶数的平均数 
	printf("奇数的平均数为：%d\n",oddvalue);
	printf("偶数的平均数为:%d\n",evenvalue);
	return 0;
} 

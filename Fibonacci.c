/*
	斐波那契数列 
*/ 
#include <stdio.h>

int main(){
	int i;
	printf("请输入：");
	scanf("%d",&i);
	int a=1,b=1,c;
	int k;
	for(k=0;k<=i;k++){
		if(k==0){
			printf("0");
			printf(" ");
		}else if(k==1){
			printf("1");
			printf(" ");
		}else if(k==2){
			printf("1");
			printf(" ");
		}else if(k>2){
			c=a+b;
			a=b;
			b=c;
			printf("%d",c);
			printf(" ");
		}
	}
	return 0;
} 

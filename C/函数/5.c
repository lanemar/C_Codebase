#include <stdio.h>
#include <stdbool.h>

int Prime_Num(int);
bool Prime_Can(int);

int main(void){
	int val;
	printf("请输入一个最大值：\n");
	scanf("%d",&val);
	printf("\n");
	Prime_Num(val);
	return 0;
} 

/*从0开始遍历到用户输入的最大值*/
int Prime_Num(int val_Num){
	int i;
	for(i=0;i<val_Num;i++){
		if(Prime_Can(i)){
			printf("%d\n",i);//如果判断为真则输入i的值。 
		}
	}
}

/*对一个数字是否是素数进行判断*/
bool Prime_Can(int PrimeNumber){
	int i;
	for(i=2;i<PrimeNumber;i++){
		if(PrimeNumber%i==0){
			return false;
		}
	}
	if(i==PrimeNumber){
		return true;
	}
}

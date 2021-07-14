#include <stdio.h>

int PrimeNum(int);
int NotZero(int);

int main(void){
	int i;
	for(i=1;i<=100;i++){
	if(PrimeNum(i)!=0){
			printf("%d\n",NotZero(PrimeNum(i)));
		}
	}
	return 0;
}

/*判断数字是否为素数*/
int PrimeNum(int Num){
	int i;
	for(i=2;i<Num;i++){
		if(Num%i==0){
			break;//如果能被某个值整除则结束此次循环并返回主函数的值为0。 
		}else if(i==Num){//这一段是判断能否被数值自己整除的。 
			return Num;
		}
	}
}

/*输出不为0的数*/
int NotZero(int val){
	if(val!=0){
		return val;
	}
}

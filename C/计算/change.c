#include <stdio.h>

int main(){
	int price = 0;
	printf("请输入一个100以内的数字：");
	scanf("%d", &price);//"scanf()"stdin标准输入函数  
	int change = 100 - price;
	printf("\n输出%d",change);
	return 0;
} 

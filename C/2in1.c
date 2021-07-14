/*
	2021.01.06
	计算1+1/2+1/3...+1/100的结果 
	强制转换类型：(Type)(表达式)：(float)(1/i) 
	
	循环中更新的变量不能定义为浮点类型。
	浮点型只能存储为一个近似值。 
*/

#include <stdio.h>

int main(void){
	float sum=0,one=1;
	int i;
	for(i=1;i<=100;i++){
		printf("第%d次计算：",i);
		sum=sum+one/i;
		printf("sum=%f\n",sum);
		int j=i;
		j++;
		printf("下一次i++：%d",j);
		printf("\n");
	}
	printf("sum=%f",sum);
	return 0;
}

/*
运行结果为：
----------------------
sum=5.187378
*/

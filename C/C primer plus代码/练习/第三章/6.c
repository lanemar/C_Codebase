/*
	1个水分子的质量约为3.0×10-23克。 1夸脱水大约是950克。 编写一个
	程序， 提示用户输入水的夸脱数， 并显示水分子的数量。
*/
#include <stdio.h>
#define kt 950
#define water 3.0e-23 

int main(void){
	//double water=3.0e-23;
	//int kt=950;
	int i;
	double sum;
	printf("请输入夸脱数：");
	scanf("%d",&i);
	sum=i*kt/water;
	printf("%.0lf",sum); 
	return 0;
}

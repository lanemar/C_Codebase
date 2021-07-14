/*
	编写一个程序， 提示用户输入一个double类型的数， 并打印该数的立
	方值。 自己设计一个函数计算并打印立方值。 main()函数要把用户输入的
	值传递给该函数。
*/
#include <stdio.h>

double a(double);

int main(void){
	double i;
	printf("请输入：");
	scanf("%lf",&i);
	printf("%lf^%lf^%lf=%lf",i,i,i,a(i));
	return 0;
}

double a(double i){
	double sum=i*i*i;
	return sum; 
}

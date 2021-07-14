/*
	一年大约有3.156×107秒。 编写一个程序， 提示用户输入年龄， 然后
	显示该年龄对应的秒数。
*/
#include <stdio.h>
#define sec 3.156e7 

int main(void){
	int age;
	printf("请输入年龄：");
	scanf("%d",&age);
	double sum; 
	//double sec=3.156e+07;
	sum=age*sec; //用户输入的是int类型最好转换为double类型进行运算 
	printf("总共：%.0lf秒",sum);//%.0lf表示取小数点后0个数字(不输出小数) 
	return 0;
} 

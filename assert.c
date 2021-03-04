/*
	2020.12.26
	测试assert函数
	assert函数用于判断可能的错误是否发生 
*/

#include <stdio.h>
#include <assert.h>

int main(void){
	double a,b,c;
	scanf("%lf %lf",&a,&b);
	assert(b!=0);
	c=a/b;
	printf("%lf",c);
	return 0;
} 

/*
如果b=0，输出的结果为：
--------------------------------
1 0
Assertion failed!

Program: E:\Cclass\assert.exe
File: E:\Cclass\assert.c, Line 13

Expression: b!=0
--------------------------------
*/ 

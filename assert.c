/*
	2020.12.26
	����assert����
	assert���������жϿ��ܵĴ����Ƿ��� 
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
���b=0������Ľ��Ϊ��
--------------------------------
1 0
Assertion failed!

Program: E:\Cclass\assert.exe
File: E:\Cclass\assert.c, Line 13

Expression: b!=0
--------------------------------
*/ 

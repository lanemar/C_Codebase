/*
	/b /t /n /r /o转义序列符的使用 
	/b:退格
	/t：转换制表符
	/n：换行符
	/r：定位至该行首位
	/o：将数值以8进制输出 
*/
#include <stdio.h>

int main(void){
	float salary;
	printf("\aEnter your desired monthly salary:");
	printf("$_______\b\b\b\b\b\b\b");//\b：退格 
	scanf("%f",&salary);
	printf("\n\t$%.2f a month is $%.2f a year.",salary,salary * 12.0);
	printf("\rGee!\n");
	return 0;
} 

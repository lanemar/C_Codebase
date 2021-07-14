#include <stdio.h>

int main(){
	const int a = 10;//"const"表示不可再更改该变量，可以理解为常量。 
	int b;
	printf("请输入任意的一个数字："); 
	scanf("%d",&b);
	b = a + b;
	printf("\n输出：%d",b); 
} 

/*
	修改编程练习5的程序， 使其能计算整数的平方和（ 可以认为第1天
	赚$1、 第2天赚$4、 第3天赚$9， 以此类推， 这看起来很不错） 。 C没有平
	方函数， 但是可以用n * n来表示n的平方。	
*/
#include <stdio.h>

int main(void){
	int day,i=0;
	printf("请输入：");
	scanf("%d",&day);
	while(i++<day)printf("第%d天：$%d\n",i,i*i);
	return 0;
}

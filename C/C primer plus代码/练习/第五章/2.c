/*
	编写一个程序， 提示用户输入一个整数， 然后打印从该数到比该数
	大10的所有整数（ 例如， 用户输入5， 则打印5～ 15的所有整数， 包括5和
	15） 。 要求打印的各值之间用一个空格、 制表符或换行符分开。
*/
#include <stdio.h>

int main(void){
	int i;
	int sum;
	printf("请输入：");
	scanf("%d",&i);
	sum=i+10;
	i=i-1;
	while(i++<sum)printf("%d ",i);
	return 0;
}

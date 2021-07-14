/*
	编写一个程序， 把用分钟表示的时间转换成用小时和分钟表示的时
	间。 使用#define或const创建一个表示60的符号常量或const变量。 通过while
	循环让用户重复输入值， 直到用户输入小于或等于0的值才停止循环。
*/
#include <stdio.h>
#define st 60

int main(void){
	int i=0;
	while(i++<st){
		printf("%d ",i);
	}
	return 0;
} 

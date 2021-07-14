/*
	编写一个程序， 提示用户输入名和姓， 然后以“名,姓”的格式打印出来。
*/
#include <stdio.h>

int main(void){
	char lastname[10];
	char newname[10];
	printf("请输出姓名：");
	scanf("%s %s",lastname,newname);
	printf("%s %s",newname,lastname); 
	return 0;
} 

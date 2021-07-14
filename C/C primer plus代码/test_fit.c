#include <stdio.h>
#include <string.h>

void fit(char *,unsigned int);

int main(void){
	char mesg [] = "Things should be as simple as possible,"" but not simpler.";
	printf("调用函数前：");
	puts(mesg);
	fit(mesg,38);
	printf("调用函数后：");
	puts(mesg);
	puts("Let's look at some more of the string.");
	puts(mesg+39);
	return 0;
}

void fit(char *string,unsigned int size){
	if(strlen(string)>size){
		//printf("string的长度为：%d\n",strlen(string)); 
		string[size]='\0';
	}
}
/*
Running Result:
--------------------------------
调用函数前：Things should be as simple as possible, but not simpler.
调用函数后：Things should be as simple as possible
Let's look at some more of the string.
 but not simpler.
--------------------------------
*/

#include <stdio.h>
#include <string.h>

void fit(char *,unsigned int);

int main(void){
	char mesg [] = "Things should be as simple as possible,"" but not simpler.";
	printf("���ú���ǰ��");
	puts(mesg);
	fit(mesg,38);
	printf("���ú�����");
	puts(mesg);
	puts("Let's look at some more of the string.");
	puts(mesg+39);
	return 0;
}

void fit(char *string,unsigned int size){
	if(strlen(string)>size){
		//printf("string�ĳ���Ϊ��%d\n",strlen(string)); 
		string[size]='\0';
	}
}
/*
Running Result:
--------------------------------
���ú���ǰ��Things should be as simple as possible, but not simpler.
���ú�����Things should be as simple as possible
Let's look at some more of the string.
 but not simpler.
--------------------------------
*/

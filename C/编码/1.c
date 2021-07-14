#include <stdio.h>

int main(void){
	int i=0x80000000;
	//int i = 0x7FFFFFFF;
	printf("%d",i); 
	//printf("%d",sizeof(char)); 
	/*
		128转换为二进制：1000 0000，由于int类型保存4个字节，所以会在1000 0000前自动补0直到补满32位所以可以输出128。 
		而char类型只保存一个字节，所以只保存了1000 0000这8个位，输出的则是-128。
		不过这128是一个溢出值，正数最大到127 
	*/
	//char ch=128;
	//printf("%d",ch);
	//printf("%#x",ch);
	/*
	int a = 1;
	long int b = 999999999; 
	a=b;
	printf("%d",a);
	*/
	return 0;
} 

//-268435457

//2147483647

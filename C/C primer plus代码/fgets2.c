/* fgets2.c -- 使用 fgets() 和 fputs() */
#include <stdio.h>
#define STLEN 10

int main(void){
	char words[STLEN];
	puts("Enter strings (empty line to quit):");
	//如果fgets函数返回的指针不是NULL指针或者读取到的第一个字符不是换行符。 
	while(fgets(words,STLEN,stdin)!=NULL && words[0]!='\n'){
		fputs(words,stdout);
		/*
			fgets每次读取9个字符给fputs输出后，再返回缓冲区中读取剩下的字符，
			直到读取到换行符，读取结束 
		*/
	}
	puts("Done.");
	return 0; 
}
/*
Running Result:
--------------------------------
Enter strings (empty line to quit):
By the way, the gets() function
By the way, the gets() function
also returns a null pointer if it
also returns a null pointer if it
encounters end-of-file.
encounters end-of-file.

Done.
--------------------------------
*/

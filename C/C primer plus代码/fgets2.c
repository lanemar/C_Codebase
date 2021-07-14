/* fgets2.c -- ʹ�� fgets() �� fputs() */
#include <stdio.h>
#define STLEN 10

int main(void){
	char words[STLEN];
	puts("Enter strings (empty line to quit):");
	//���fgets�������ص�ָ�벻��NULLָ����߶�ȡ���ĵ�һ���ַ����ǻ��з��� 
	while(fgets(words,STLEN,stdin)!=NULL && words[0]!='\n'){
		fputs(words,stdout);
		/*
			fgetsÿ�ζ�ȡ9���ַ���fputs������ٷ��ػ������ж�ȡʣ�µ��ַ���
			ֱ����ȡ�����з�����ȡ���� 
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

/*
	���������߼��д���
	a����ִ���걻�ͷź󣬱���iҲ���ͷ��ˣ������������е�printf����������ǲ��ܶ�ȡ��i��ֵ�� 
*/

#include <stdio.h>
#include <stdlib.h>

int a(int **);

int main(void){
	/*
	char * p="abcdefg";
	int i;
	int ** a=&p;
	char *** r=&a;
	*/
	/* 
	for(i=0;i<7;i++){
		printf("%c",*p++);//*p++��ı�*p��ֵ�� 
	}
	printf("\n");
	//printf("%c\n",*p+1);
	*/
	int * p;
	a(&p);
	printf("%d",*p);
	return 0;
}

int a(int ** r){
	int i =5;
	*r=&i;//*r=p p=&i,��Ϊr�������p�ĵ�ַ��*r����p�� 
}

/*
Running Result:
5 
*/

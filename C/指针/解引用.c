#include <stdio.h>

int main(void){
	int i=1;
	int * p;
	printf("%#x",p);
	p=&i;
	*p=i;
	printf("%d",*p);
	return 0;
}

/*
��Ⲣ��ס��*p����p������Ϊ��ַ�ı�����
�����p��ֵi�ĵ�ַ����ô*p������i�ĵ�ַΪ��ַ�ı���������ָ�����i�� 
*/

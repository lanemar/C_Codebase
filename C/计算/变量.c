#include <stdio.h>

int main(){
	const int a = 10;//"const"��ʾ�����ٸ��ĸñ������������Ϊ������ 
	int b;
	printf("�����������һ�����֣�"); 
	scanf("%d",&b);
	b = a + b;
	printf("\n�����%d",b); 
} 

/*
	The problem to be solved:
	��int���ͱ�����ֵ�ַ����͵���ֵΪʲô������������� 
	Ϊint���ͱ�������charֵ���������ʹ��ASCII���ַ�ת��ΪASCII���϶�Ӧ�ı�ţ���Ȼ���ʹ��%c/%s������int�����Ļ���������ַ��� 
	char���͵�������int���ͱ���������α���ġ� 
	����ͬ�ϸ����⡣ 
*/
#include <stdio.h>
//#include <malloc.h>

int main(void){
	int a='a';
	//int a=97;//�����ֵΪ97�����������䡣 
	/*
		��Ϊ����a��ֵ�����ַ�ʱ��ϵͳ�ڱ����ʱ����Զ�������ʽת���������ַ�ת��ΪASCII���ж��ڵ����֡� 
		(int a='a';) == (int a=(int)'a';)
		a��ASCII�б��Ϊ97�� 
	*/
	//int a="Hello World";//[Warning] initialization makes integer from pointer without a cast
	//int * p;
	//p=&a; //[Warning] assignment from incompatible pointer type
	//printf("%c",*p);
	//char b=a;
	printf("%c\n",a);//���a 
	printf("%d\n",a);//���97 
	/*
		�����Ҫ���������ڴ��еı����������Ҫע��������Ʒ���ʹ�ã����Ҫ���ԭ�����ַ�����ʹ��%c/%s�������������ԭ�����ַ���Ҳ�൱���ڽ�����һ����ʽת����
		��ԭ���洢���ڴ���ASCII��ת��ԭ�����ַ���������� 
	*/ 
	return 0;
} 

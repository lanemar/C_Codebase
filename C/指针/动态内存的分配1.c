#include <stdio.h>
#include <malloc.h>

int main(void){
	int a=5;
	int * p=(int *)malloc(4);//���䶯̬�ڴ档 
	p=&a;
	printf("%#x\n",&a);
	printf("%#x\n",p);
	printf("%d",*p);
	free(p);//�ͷ�P��ָ��Ķ�̬�ڴ档 
	printf("%d\n",*p);
	printf("%#x\n",p);
	return 0;
} 
/*
malloc(int var):malloc����������ڱ�����һ����������вΡ�
ǰ��ֱ��ָ�����͵ı�����Ϊ��̬������
��̬���������ɱ����Ա�ֶ��ͷţ�ֻ����ϵͳ��������������ڵĺ������ͷš�������̬�ڴ����ʹ��free�������ͷš� 
*/

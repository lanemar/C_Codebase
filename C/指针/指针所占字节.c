#include <stdio.h>

int main(void){
	int a=1;
	char b='a';
	double c=1.1;
	int * p;
	char * q;
	double * r;
	//long int * t; 
	printf("%d,%d,%d\n",sizeof(a),sizeof(b),sizeof(c));
	printf("%d,%d,%d\n",sizeof(p),sizeof(q),sizeof(r)); //����ָ����ʲô���͵ģ�����ռ�õ��ֽڶ�Ϊ8λ�� 
	//printf("%d",sizeof(t));
	printf("%#x,%#x,%#x\n",p,q,r); 
	printf("%#x,%#x,%#x\n",p,q,r); 
	
	return 0;
}

/*
	��ӡ���ʹ�С
	sizeof()�����ֽ�Ϊ��λ����ָ�����͵Ĵ�С�� 
	%zd��C99��C11�ṩ��ƥ��sizeof�ķ������͡� 
*/
#include <stdio.h>

int main(void){
	printf("Type int has a size of %zd bytes.\n",sizeof(int));
	printf("Type char has a size of %zd bytes.\n",sizeof(char));
	printf("Type float has a size of %zd bytes.\n",sizeof(float));
	printf("Type double has a size of %zd bytes.\n",sizeof(double));
	printf("Type long has a size of %zd bytes.\n",sizeof(long));
	printf("Type long long has a size of %zd bytes.\n",sizeof(long long));
	getchar();//Enter���� 
	return 0;
}

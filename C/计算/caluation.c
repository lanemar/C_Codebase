#include <stdio.h>

int main(){
	double a,b;
	printf("�����룺\n");
	scanf("%e %e",&a,&b);
	printf("�����%e",((a+b/12)*0.3)); 
	//printf("%lu\n",sizeof(float));���������ܵõ�4�� 
	//printf("%lu",sizeof(double));���������ܵõ�8�� 
	/*�����ȸ���float�Ķ�ȡ����Ϊ%f��˫���ȸ���double�Ķ�ȡ����Ϊ%e��*/
} 

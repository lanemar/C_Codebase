/*
	��дһ������ ��ʾ�û�����һ��double���͵����� ����ӡ��������
	��ֵ�� �Լ����һ���������㲢��ӡ����ֵ�� main()����Ҫ���û������
	ֵ���ݸ��ú�����
*/
#include <stdio.h>

double a(double);

int main(void){
	double i;
	printf("�����룺");
	scanf("%lf",&i);
	printf("%lf^%lf^%lf=%lf",i,i,i,a(i));
	return 0;
}

double a(double i){
	double sum=i*i*i;
	return sum; 
}

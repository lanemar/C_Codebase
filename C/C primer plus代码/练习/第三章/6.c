/*
	1��ˮ���ӵ�����ԼΪ3.0��10-23�ˡ� 1����ˮ��Լ��950�ˡ� ��дһ��
	���� ��ʾ�û�����ˮ�Ŀ������� ����ʾˮ���ӵ�������
*/
#include <stdio.h>
#define kt 950
#define water 3.0e-23 

int main(void){
	//double water=3.0e-23;
	//int kt=950;
	int i;
	double sum;
	printf("�������������");
	scanf("%d",&i);
	sum=i*kt/water;
	printf("%.0lf",sum); 
	return 0;
}

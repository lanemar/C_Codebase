/*
	��дһ������ ��ȡһ���������� �ȴ�ӡ��С������ʽ�� �ٴ�ӡ��
	ָ����ʽ�� Ȼ�� ���ϵͳ֧�֣� �ٴ�ӡ��p�������� ��ʮ�����Ƽ���
	���� �� �����¸�ʽ����� ʵ����ʾ��ָ��λ����ϵͳ���죩 ��
	Enter a floating-point value: 64.25
	fixed-point notation: 64.250000
	exponential notation: 6.425000e+01
	p notation: 0x1.01p+6
*/
#include <stdio.h>
#define fl 64.25

int main(void){
	printf("Enter a floating-point value:%.2f\n",fl);
	printf("fixed-point notation:%.6f\n",fl);
	printf("exponential notation:%.6e\n",fl);
	printf("p notation:%a",fl);//p������ʹ�õ���%a/%A����� 
	return 0;
}

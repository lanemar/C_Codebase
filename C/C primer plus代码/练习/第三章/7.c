/*
	1Ӣ���൱��2.54���ס� ��дһ������ ��ʾ�û�������ߣ� /Ӣ
	�磩 �� Ȼ��������Ϊ��λ��ʾ��ߡ�
*/
#include <stdio.h>
#define ONE_INC 2.54 //1inc=2.54cm 

int main(void){
	
	double cm;
	int inc;
	printf("��������ߣ�");
	scanf("%d",&inc);
	cm=inc*ONE_INC;
	printf("%lf",cm);
	/*
	int cm;
	scanf("%d",&cm);
	printf("%.0lf",cm/ONE_INC);
	*/
	return 0;
}

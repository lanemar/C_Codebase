/*
	��дһ������ ��ʾ�û�������ߣ� ��λ�� Ӣ�磩 �������� Ȼ��������ĸ�ʽ��ʾ�û����������Ϣ��
	Dabney, you are 6.208 feet tall
	ʹ��float���ͣ� ����/��Ϊ���š� �����Ը�⣬ ����Ҫ���û�������Ϊ��λ������ߣ� ������Ϊ��λ��ʾ������
*/
#include <stdio.h>
#define INC_CM 2.54
#define M_CM 100

int main(void){
	int tall;
	char name[10];
	float inc;
	float M;
	printf("��������ߣ�");
	scanf("%d",&tall);
	printf("������������");
	scanf("%s",name);
	inc=tall/INC_CM;
	M=(float)tall/M_CM;//������Ҫ����ǿ������ת���� 
	printf("%s,you are %.2f feet tall",name,inc);
	//printf("%s,you are %.2f feet tall",name,M);
	return 0;
}

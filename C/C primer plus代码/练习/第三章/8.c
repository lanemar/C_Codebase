/*
	���������������ϵͳ�У� 1Ʒ�ѵ���2���� 1������8��˾�� 1��˾����2�����ף� 1�����׵���3���ס� 
	��дһ������ ��ʾ�û����뱭���� ����Ʒ�ѡ� ��˾�� ���ס� ����Ϊ��λ��ʾ�ȼ������� 
	˼�����ڸó��� Ϊ��ʹ�ø������ͱ��������͸����ʣ�
*/
#include <stdio.h>
#define PINT_CUT 2 //Ʒ�� 
#define CUT_OUNCE 8 //��˾ 
#define OUNCE_SPOON 2 //������ 
#define SPOON_TEA 3 //���� 

int main(void){
	int cutsize;
	double PINT;
	int OUNCE,SPOON,TEA; 
	printf("�����뱭����");
	scanf("%d",&cutsize);
	PINT=(double)cutsize/PINT_CUT;
	OUNCE=cutsize*CUT_OUNCE;
	SPOON=OUNCE*OUNCE_SPOON;
	TEA=SPOON*SPOON_TEA;
	printf("Լ%.2lfƷ��,%d��˾,%d������,%d���ס�",PINT,OUNCE,SPOON,TEA);
	return 0;
}

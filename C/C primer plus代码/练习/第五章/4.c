/*
	��дһ������ ��ʾ�û�����һ����ߣ� ��λ�� ���ף� �� ���ֱ���
	���׺�Ӣ��Ϊ��λ��ʾ��ֵ�� ������С�����֡� ����Ӧ�������û��ظ���
	����ߣ� ֱ���û�����һ������ֵ�� �����ʾ�����£�
	Enter a height in centimeters: 182
	182.0 cm = 5 feet, 11.7 inches
	Enter a height in centimeters (<=0 to quit): 168.7
	168.0 cm = 5 feet, 6.4 inches
	Enter a height in centimeters (<=0 to quit): 0
	bye
*/
#include <stdio.h>
#define FEET 30.48
#define INC 2.54

int main(void){
	int tall;
	double inc,feet;
	printf("�����룺");
	scanf("%d",&tall);
	while(tall>0){
		feet=tall/FEET;
		inc=(feet-(int)feet)*INC;
		printf("Enter a height in centimeters:%d\n",tall); 
		printf("%.1lf cm = %d feet, %.1lf inches",(double)tall,(int)feet,inc);
		printf("\n");
		printf("�����룺");
		scanf("%d",&tall);
	}
	
	return 0;
}

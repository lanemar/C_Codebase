/*
	��дһ������ ��ʾ�û����������� Ȼ����ת����������������
	���磬 �û�����18�� ��ת����2��4�졣 ������ĸ�ʽ��ʾ�����
	18 days are 2 weeks, 4 days.
	ͨ��whileѭ�����û��ظ����������� ���û�����һ������ֵʱ�� ��0
	��-20�� �� ѭ��������
*/
#include <stdio.h>
#define WEEK 7

int main(void){
	int day;
	printf("�����룺");
	scanf("%d",&day);
	while(day>0){
		int weeks,days;
		weeks=day/WEEK;
		days=day%WEEK;
		printf("%d days are %d weeks, %d days.",day,weeks,days);
		printf("\n");
		printf("�����룺");
		scanf("%d",&day);
	}
	return 0;
}

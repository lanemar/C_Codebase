/*
	һ���Լ��3.156��107�롣 ��дһ������ ��ʾ�û��������䣬 Ȼ��
	��ʾ�������Ӧ��������
*/
#include <stdio.h>
#define sec 3.156e7 

int main(void){
	int age;
	printf("���������䣺");
	scanf("%d",&age);
	double sum; 
	//double sec=3.156e+07;
	sum=age*sec; //�û��������int�������ת��Ϊdouble���ͽ������� 
	printf("�ܹ���%.0lf��",sum);//%.0lf��ʾȡС�����0������(�����С��) 
	return 0;
} 

/*
	ͨ�����飨 ����д���д�������ĳ��� �۲�ϵͳ��δ���������
	�硢 ����������͸���������������
*/
#include <stdio.h>
#include <limits.h>
#include <float.h> 

int main(void){
	int big_int=2147483647;
	float big_float=3.4e38;
	float small_float=10.0/3;
	printf("The big int data is %d\n",big_int+1);//int�����ֵ��� 
	printf("The big float data is %f\n",big_float*10);//Խ��������INF 
	printf("The big float data is %f\n",small_float);//ǿ��ת����ɾ����½� 
	printf("The MAX float data is %f\n",FLT_MAX);//���float���͵����ֵ 
	printf("The MAX int data is %ld",INT_MAX);//���int���͵����ֵ 
	return 0;
} 

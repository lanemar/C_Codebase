/*
	�������˵�����ĸ�ʽ��� 
*/
#include <stdio.h>
#define PAGES 959
//#define PAFLO 1.1

int main(void){
	printf("*%d*\n",PAGES);
	printf("*%2d*\n",PAGES);
	printf("*%10d*\n",PAGES);
	//�Ҷ��� 
	//return 0;
	printf("*%-10d*\n",PAGES);
	//����� 
	//printf("*%5.2f*",PAFLO);
	//��ӡһ�����������ֶο�Ϊ5��С���������λС���� 
	return 0;
} 
/*
Running Result:
--------------------------------
*959*
*959*
*       959*
*959       *
* 1.10*
--------------------------------
*/

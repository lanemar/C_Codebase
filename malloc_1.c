/*
	��malloc����ǰ����ǿ�Ƶ�����ת����Ϊ�˸��õĴ������ֲ�ԡ� 
	��C��malloc�������ص�ֵ��void*���ͣ�void*������ʽת��Ϊ�κ����͵�ָ�롣
	��C++��Ҳ֧��void*������֧�ֶ�void*����ʽת����������Ҫ����ǿ�Ƶ�����ת���� 
	����˵��
		int * p=(int*)malloc(sizeof(int));GCC/G++�����޴���
		int * p=malloc(sizeof(int));����GCC�б����޴�����G++�л���벻ͨ���� 
	
*/

#include <stdio.h>
//#include <malloc.h>
#include <stdlib.h>

int main(void){
	//int a=1;
	printf("%d\n",sizeof(int));
	int * pArr;//int���� 
	pArr=malloc(5);//û�н���ǿ������ת���൱����ֱ�Ӵ��������ͱ��������ظ�pArr�ĵ�ַҲ�������͵�(void *)�� 
	/*�����൱���Ǵ�����һ����̬����*/
	*pArr=1;//int���� 
	
	*(pArr+1)='a';// ���������ƫ����һ��int�Ķ��ڴ�ռ䣬ʵ��ռ��һ��Ϊ4����Ԫ���Ҽ���*Aprrһ��Ϊ8����Ԫ��ֻ�ǳ�ʼ������ʱֻ��5����Ԫ�� 
	
	//*(pArr+2)="����һ���ַ�";//[Warning] assignment makes integer from pointer without a cast 
	printf("%d\n",*pArr);//Output:1 
	printf("%d\n",sizeof(*pArr));//Output:4 
	printf("%p\n",pArr);
	//printf("%p\n",pArr+1);
	//printf("%p\n",pArr+2);
	printf("%c\n",*(pArr+1));//Output:'a' 
	printf("%d\n",sizeof(*(pArr+1)));//Output:4 
	//printf("%s\n",*(pArr+2));
	//printf("%p\n",);
	return 0;
} 

/*
Running Result:
--------------------------------
1
0000000000BC13E0
a
--------------------------------
*/ 

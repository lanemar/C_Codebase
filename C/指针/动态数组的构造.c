#include <stdio.h>
#include <malloc.h>

int main(void){
	/*
	int * p=(int *)malloc(4);
	//��δ��붨���������ڴ棬һ���Ǿ�̬�ڴ�P��һ���Ƕ�̬�ڴ档
	//�ھ�̬�ڴ���ָ����Ƕ�̬�ڴ���׵�ַ��
	//��Ϊ���������ͣ�������ָ��̬�ڴ��׵�ַʱҲ�൱��ָ���˸ö�̬�ڴ����塣
	*/
	int len; 
	printf("�����볤�ȣ�");
	scanf("%d",&len);
	int * pArr = (int *)malloc(sizeof(int)*len);
	//��һ�δ������ڶ��嶯̬���顣 
	// sizeof(int)���������������sizeof�����Ľ����Ϊmalloc���βΡ�
	//�ȼ��ھ�̬���� int pArr[len]; 
	int i;
	//Ϊ����Ԫ�ظ�ֵ�� 
	for(i=0;i<len;i++){
		printf("������pArr[%d]��",i);
		scanf("%d",&pArr[i]);
		//��̬�����ʹ�þ�̬������÷�һ����
		//��ԭ���pArr+1��pArr+2��ԭ��һ���� 
	}
	//��������ֵ�� 
	for(i=0;i<len;i++){
		printf("%d\n",pArr[i]);
	}
	//�ͷ�pArrָ����ڴ档
	//ֻҪmain��������ִ�У��ö�̬����Ͳ��ᱻ�ͷš� 
	free(pArr);
	for(i=0;i<len;i++){
		printf("%d\n",pArr[i]);
	}
	//�ͷź�����������ֵ�� 
}

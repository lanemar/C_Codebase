#include <stdio.h>
#include <malloc.h>

int main(void){
	int * p=(int *)malloc(4);
	//��δ��붨���������ڴ棬һ���Ǿ�̬�ڴ�P��һ���Ƕ�̬�ڴ档
	//�ھ�̬�ڴ���ָ����Ƕ�̬�ڴ���׵�ַ��
	//��Ϊ���������ͣ�������ָ��̬�ڴ��׵�ַʱҲ�൱��ָ���˸ö�̬�ڴ����塣
	int len; 
	int * pArr = (int *)malloc(sizeof(int)*len);
	//��һ�δ������ڶ��嶯̬���顣 
	// sizeof(int)���������������sizeof�����Ľ����Ϊmalloc���βΡ�
	 
}

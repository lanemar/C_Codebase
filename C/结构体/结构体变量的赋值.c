#include <stdio.h>
/*

�ṹ��������Ϊ�����͵��������͡� 

*/

/*struct��ʾ����һ���ṹ�壬�൱�ڶ�����һ���������ͣ�����������ʹ����Ҫ���������ͣ�struct var-name "name"��*/
struct students{
	int age;
	float socre;
	char sex;
};

int main(void){
	/* ��һ�ָ�ֵ������ */
	struct students a = {22,95.5,'M'};//�����൱�ڶ�����һ���ṹ�����a�� 
	//�ڶ���ṹ�������ͬʱ���и�ֵ�� 
	
	/* �ڶ��ָ�ֵ����: */
	struct students a2;
	/*��һ��ȡ���ṹ���Ա�ķ�����*/
	a2.age=22;
	a2.sex='M';
	a2.socre=99.9;
	//���ַ���ֻ�ܵ�����ֵ�� 
	
	/*�ڶ���ȡ���ṹ���Ա������*/
	struct students * ptr = &a;//����һ���ṹ�����͵�ָ��������������ֻ�ܴ��ַ��
	ptr->age = 10;//�ڼ�����ڲ�����ʱ�ᱻת��Ϊ(*ptr).age�� 
	
	printf("%d\n %c\n",a.age,ptr->sex); 
	
	return 0;
} 

//�����ͬʱ��ֵ����ʼ��

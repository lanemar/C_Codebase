/*
	2021.02.28
	����ṹ�岢��ʼ���� 
*/
/*
	//����ṹ�� 
	struct Std_a{
		... 
	}; 
	//�����ṹ��(main����) 
	struct Std_a Std;
	//��ʼ���ṹ��
	struct Std_a Std={...};//�������帳ֵ
	Std.val_Name=val;//����Ԫ�ظ�ֵ 
*/

#include <stdio.h>

//����
struct Std_a{
	int num;//std Number
	char name;//std Name
};

/*����ʹ�õ�һ�ַ�������ṹ��(Std_a)*/

/*
struct Std_b{
	int num;//std Number
	char name;//std Name
}Stds_2; 
*/

/*
struct {
	int num;//std Number
	char name;//std Name
}Std_3;

*/

int main(void){
	
	//��һ�ֳ�ʼ������ 
	struct Std_a Std_s1={123,'a'};//��������ʼ��������ֻ���ڶ���ʱһͬ��ֵ�� 
	
	//�ڶ��ֳ�ʼ������
	struct Std_a Std_s2;//ֻ�ܵ������и�ֵ 
	Std_s2.num=1;
	Std_s2.name='a';
	
 	return 0;
}

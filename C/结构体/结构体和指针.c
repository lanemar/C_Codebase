/*
	2021.02.28
	�ṹ����ָ��
	ʹ��ָ��ķ�ʽ�Խṹ���е�Ԫ�ؽ��и�ֵ�� 
*/

#include <stdio.h>

struct Std_a{
	int std_Num;
	char std_Name;
};	
	
int main(void){
	struct Std_a std_s1;
	
	//�����ṹ��ָ��
	struct Std_a * str_Ptr=&std_s1;
	
	//ʹ��ָ����и�ֵ 
	str_Ptr->std_Num=1; 
	str_Ptr->std_Name='a';
	/*
		���ַ�ʽ�ȼ���*(std_s1).std_Num/.std_Name; 
	*/
	
	printf("%d,%c",std_s1.std_Num,std_s1.std_Name); 
	return 0;
} 

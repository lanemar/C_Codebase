/*
	2021.03.23
	��ƥ�������ת�� 
*/
#include <stdio.h>
#define PAGES 336
#define WORDS 65618

int main(void){
	short num = PAGES;
	short mnum = -PAGES;
	printf("num as short and unsigned short:\'%hd\',\'%hu\'\n",num,num);
	printf("-num as short and unsigned short:\"%hd\",\"%hu\"\n",mnum,mnum);
	//unsigned short���mnum��ֵΪ��65200��
	//�ο�C primer plus:
	//short int�Ĵ�СΪ2���ֽڣ����޷��ŵ���������ֵΪ65536��
	//����0~32768Ϊ�з�������������32768~65535Ϊ�з��Ÿ�������
	//����65535��ʾ-1,65534��ʾ-2�����Դ����ơ�
	//��mnum��ֵΪ-336�����ʾΪ��65200����65536-336����
	//����ԭ����Ҫ�ο���������ԭ�� 
	printf("num as int and char:%d,%c\n",num,num);
	//num��ֵ(short int)ʹ��%c�����ϵͳֻ���ȡ����1���ֽڵ����ݡ�
	//short intռ�����ֽڣ���%cֻ��ȡһ���ֽ��е����ݡ� 
	//�൱��%cֻ��ȡ����numֵ�������º��һ���ֽڵ����ݡ� 
	printf("WORDS as int,short,and char:%d,%hd,%c\n",WORDS,WORDS,WORDS); 
	//WORDS��ֵ�Ѿ�������short int��ֵ��Χ(0~65536)��
	//���ʹ��short int��ʽ���������ϵͳֻ��ȡ�������º������ֽڽ��������
	//�ο��ڶ���printf��䣬���WORDS��ֵ��32768~65535ֱ�ӣ�������Ϊ��ֵ�� 
	return 0;
}
/*
Running Result:
--------------------------------
num as short and unsigned short:'336','336'
-num as short and unsigned short:"-336","65200"
num as int and char:336,P
WORDS as int,short,and char:65618,82,R
--------------------------------
*/

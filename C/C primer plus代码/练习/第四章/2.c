/*
	��дһ������ ��ʾ�û����������գ� ��ִ��һ�²�����
	a.��ӡ�����գ� ����˫���ţ�
	b.�ڿ��Ϊ20���ֶ��Ҷ˴�ӡ�����գ� ����˫���ţ�
	c.�ڿ��Ϊ20���ֶ���˴�ӡ�����գ� ����˫���ţ�
	d.�ڱ�������ȿ�3���ֶ��д�ӡ�����ա�
*/
#include <stdio.h>
#include <string.h>

int main(void){
	char name[10];
	int width=strlen(name);
	//width-=4;
	printf("�����������");
	scanf("%s",name);
	printf("\"%s\n",name); 
	printf("\"%20s\"\n",name);
	printf("\"%-20s\"\n",name);
	printf("\"%*s\"",(width+3),name);
	return 0;
}

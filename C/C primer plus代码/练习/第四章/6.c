/*
	��дһ������ ����ʾ�û��������� Ȼ����ʾ�û������ա� 
	��һ�д�ӡ�û�����������գ� ��һ�зֱ��ӡ�����յ���ĸ���� ��ĸ��Ҫ����Ӧ�����յĽ�β���룬 ������ʾ��
	Melissa Honeybee
	 7 		 8
	�������� �ٴ�ӡ��ͬ����Ϣ�� ������ĸ��������Ӧ�����յĿ�ͷ���룬 ������ʾ��
	Melissa Honeybee
	7 		8
*/
#include <stdio.h>
#include <string.h>

int main(void){
	char lastname[10];
	char newname[10];
	int lastsize,newsize;
	printf("���������֣�");
	scanf("%s",newname);
	printf("���������ϣ�");
	scanf("%s",lastname);
	lastsize=strlen(lastname);
	newsize=strlen(newname);
	printf("%s %s\n",newname,lastname);
	printf("%*d,%*d\n",newsize,newsize,lastsize,lastsize);
	printf("%s %s\n",newname,lastname);
	printf("%-*d,%-*d\n",newsize,newsize,lastsize,lastsize);
	return 0;
}
/*
Running Result:
--------------------------------
���������֣�Melissa
���������ϣ�Honeybee
Melissa Honeybee
      7,       8
Melissa Honeybee
7      ,8
--------------------------------
*/

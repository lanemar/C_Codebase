/*
	2021.03.24
	scanf����ʹ��ȡ��ַ��'&'�÷� 
*/
#include <stdio.h>

int main(void){
	
	int age;
	float assets;
	char pet[30];
	printf("Enter your age,assets,and favorite pet.\n");
	scanf("%d%f",&age,&assets);
	scanf("%s",pet);
	printf("%d $%.2f %s\n",age,assets,pet);
	return 0;
	
	/*
	char a;
	char b;
	scanf("%c",&a);
	scanf(" %c",&b);//�����%cǰ����ӿո�scanf������������ո񣬴���һ���ǿ��ַ���ʼ��ȡ�� 
	printf("%c,%c",a,b); 
	*/
}
/*
Running Result:
--------------------------------
Enter your age,assets,and favorite pet.
1
1.1
aaa
1 $1.10 aaa
--------------------------------
*/

/*
	2021.03.23
	�ַ��������Ǹ�ʽ 
*/
#include <stdio.h>
#define BLURB "Authentic imitation!"

int main(void){
	printf("[%2s]\n",BLURB);
	printf("[%24s]\n",BLURB);
	/*������ַ���ʱ��Ӿ��ȱ�ʾ��������ַ��ĸ���������.5��ʾֻ���5���ַ���*/
	printf("[%24.5s]\n",BLURB);
	printf("[%-24.5s]\n",BLURB);
	//printf("The %40s family just may be $%5.2f dollars richer!","wing yam",520.1314);
	return 0;
}
/*
Running Result:
--------------------------------
[Authentic imitation!]
[    Authentic imitation!]
[                   Authe]
[Authe                   ]
--------------------------------
*/

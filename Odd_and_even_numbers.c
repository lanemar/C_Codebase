/*
	������100����������ż���ĸ����� 
*/

#include <stdio.h>

int main(void){
	int odd=0,even=0;
	int i;
	int oddsize=0,evensize=0;//����
	int oddvalue=0,evenvalue=0;//ƽ���� 
	for(i=1;i<=100;i++){
		printf("��%d�Σ�",i); 
		printf("i=%d\n",i); 
		printf("-------------------------\n");
		if(i%2==1){
			odd=odd+i;
			printf("����,��odd\n");
			oddsize++;//����������1 
		}else if(i%2==0){
			even=even+i;
			printf("ż��,��even\n"); 
			evensize++;//ż��������1 
		}
		printf("odd=%d,even=%d\n",odd,even);
		printf("-------------------------\n");
		printf("\n"); 
	}
	printf("odd=%d,even=%d\n",odd,even);
	printf("�����ĸ���Ϊ��%d\n",oddsize);
	printf("ż���ĸ���Ϊ��%d\n",evensize);
	oddvalue=odd/oddsize;//������ƽ���� 
	evenvalue=even/evensize;//ż����ƽ���� 
	printf("������ƽ����Ϊ��%d\n",oddvalue);
	printf("ż����ƽ����Ϊ:%d\n",evenvalue);
	return 0;
} 

#include <stdio.h>

int main(){
	/*int x;
	printf("�����������\n");
	scanf("%d",&x);
	int years;
	printf("������Ҫ��Ķ�ã��꣩");
	scanf("%d",&years);
	for(int a=1;a<=years;a++){
		static x = x + x * 0.0033;
	}
	printf("%f",x);*/
	int x;
	printf("�����������\n");
	scanf("%d",&x);
	/*float a = x*0.033;
	float b = (a+x)*0.033;
	float c = (a+b+x)*0.033;
	float amount = a+b+c+x;*/
	float amount = x * (1+0.033) * (1+0.033) * (1+0.033); 
	printf("��Ϣ���Ϊ��%f",amount);
}

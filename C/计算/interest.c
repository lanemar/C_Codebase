#include <stdio.h>

int main(){
	double principal;
	int years;
	printf("������Ҫ����ı���\n");
	scanf("%lf",&principal);
	//static double a = principal;  //����[Error] initializer element is not constant ��ʼ����Ԫ�ز��Ǻ㶨��
	printf("������Ҫ���������\n");
	scanf("%d",&years);
	//static int b = years; //����[Error] initializer element is not constant ��ʼ����Ԫ�ز��Ǻ㶨��
	while(years--){
		double interest = principal * 0.033;
		printf("��%d�꣬��ϢΪ��%lf��������Ϣ��Ķ��Ϊ��%lf\n",years,interest,principal + interest);
		principal = principal + interest;
	}
	//printf("����Ϊ��%lf������ʱ��Ϊ��%d\n",a,b);  
	printf("��ǰ�ܶ��Ϊ��%lf\n",principal);
} 

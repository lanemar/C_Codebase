#include <stdio.h>
int main(void)
{
	int base =100000; //����
	int profit; //�ֶ��������
	loop1: printf("�����룺 ");
	scanf("%d",&profit);
	float bonus;
	
	float bonus1,bonus2,bonus4,bonus6,bonus10;
	bonus1=100000*0.1;
    bonus2=bonus1+base*0.075;//10w����ɼ��ϴ���10w���ֵ���ɣ�������20w�� 10000+100000*0.075 =17500 
    bonus4=bonus2+2*base*0.05;//
    bonus6=bonus4+2*base*0.03;
    bonus10=bonus6+4*base*0.015;
	/*�ڼ����Ӧ��������ʱ����Ҫ�Ѿ�������֮ǰ����ɼ���������ڼ��Ϲ̶�����֮�����ɡ�*/
	
	if(profit<=base){
		bonus=profit*0.1; //10w
	}else if(profit<2*base){
		//bouns=(base*0.1)+((profit-base)*0.075); //<20w
		bonus=bonus1+((profit-base)*0.075);//�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣������7.5%��
	}else if(profit<4*base){
		//bonus=((base*0.1)+((profit-base)*0.075))+((profit-2*base)*0.05); //<40w
		bonus=bonus2+((profit-2*base)*0.05); //<40w
	}else if(profit<6*base){
		bonus=(((base*0.1)+((profit-base)*0.075))+((profit-2*base)*0.05))+((profit-4*base)*0.03); //<60w
		bonus=bonus4+((profit-4*base)*0.03); //<60w
	}else if(profit<10*base){
		bonus=((((base*0.1)+((profit-base)*0.075))+((profit-2*base)*0.05))+((profit-4*base)*0.03))+((profit-6*base)*0.015); //<100w
		bonus=bonus6+((profit-6*base)*0.015); //<100w
	}else if(profit>10*base){
		//bonus=(((((base*0.1)+((profit-base)*0.075))+((profit-2*base)*0.05))+((profit-4*base)*0.03))+((profit-6*base)*0.015))+((profit-10*base)*0.001); //>100w
		bonus=bonus10+((profit-10*base)*0.001); //>100w
	}
	printf("%f\n",bonus);
	printf("y/n\n");
	char choose;
	getchar();
	scanf("%c",&choose);
	if(choose=='y'){
		goto loop1;
	}else{
		return 0;
	}
}
	/*
	��Ŀ����ҵ���ŵĽ������������ɡ�
	����(I)���ڻ����10��Ԫʱ���������10%�� 
	�������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣������7.5%��
	20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��
	40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3%��
	60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%;
	����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɣ�
	�Ӽ������뵱������I����Ӧ���Ž���������
	*/


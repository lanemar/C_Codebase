/*
	2020.12.25
	1��100�������ܺ͡�
	������forѭ�����ԡ� 
*/

#include <stdio.h>

int main(void){
	int i,sum=0;
	/**/
	for(i=0;i<=100;i++)//for(��һ���ʽ;�ڶ����ʽ;�������ʽ) ,ֻ���ڵڶ����ʽ�ж�ͨ��������ִ�е������ʽ�� 
	{
		printf("��%d��ѭ����\n",i+1);
		printf("----------------------------\n");
		printf("bofore: sum=%d,i=%d\n",sum,i);//��һ��ѭ�� 
		printf("\n");
		printf("now:	sum+i:%d+%d\n",sum,i);//��¼sum=sum+i 
		printf("\n");
		sum=sum+i; 
		printf("after�� sum=%d,i=%d\n",sum,i);//���������sum��ֵ���鿴i�Ƿ�ﵽforѭ���ڶ����ʽ������ 
		printf("----------------------------\n");
		printf("\n");
		if(i<100)
			printf("i=%d\n",i);//�����
		else{
			printf("i=%d\n",i);
			printf("i����100������i=100��������i<100��forѭ���ж�������\n");
		}			
	} 
	printf("sum=%d",sum);
}

/*
----------------------------
sum=5050
----------------------------

for(���ʽ1�����ʽ2�����ʽ3){
	��䡣 
}
*/ 

/*
	2021.01.06
	����1+1/2+1/3...+1/100�Ľ�� 
	ǿ��ת�����ͣ�(Type)(���ʽ)��(float)(1/i) 
	
	ѭ���и��µı������ܶ���Ϊ�������͡�
	������ֻ�ܴ洢Ϊһ������ֵ�� 
*/

#include <stdio.h>

int main(void){
	float sum=0,one=1;
	int i;
	for(i=1;i<=100;i++){
		printf("��%d�μ��㣺",i);
		sum=sum+one/i;
		printf("sum=%f\n",sum);
		int j=i;
		j++;
		printf("��һ��i++��%d",j);
		printf("\n");
	}
	printf("sum=%f",sum);
	return 0;
}

/*
���н��Ϊ��
----------------------
sum=5.187378
*/

#include <stdio.h>
#include <stdbool.h>

int Prime_Num(int);
bool Prime_Can(int);

int main(void){
	int val;
	printf("������һ�����ֵ��\n");
	scanf("%d",&val);
	printf("\n");
	Prime_Num(val);
	return 0;
} 

/*��0��ʼ�������û���������ֵ*/
int Prime_Num(int val_Num){
	int i;
	for(i=0;i<val_Num;i++){
		if(Prime_Can(i)){
			printf("%d\n",i);//����ж�Ϊ��������i��ֵ�� 
		}
	}
}

/*��һ�������Ƿ������������ж�*/
bool Prime_Can(int PrimeNumber){
	int i;
	for(i=2;i<PrimeNumber;i++){
		if(PrimeNumber%i==0){
			return false;
		}
	}
	if(i==PrimeNumber){
		return true;
	}
}

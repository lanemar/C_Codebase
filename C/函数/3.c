#include <stdio.h>

int PrimeNum(int);
int NotZero(int);

int main(void){
	int i;
	for(i=1;i<=100;i++){
	if(PrimeNum(i)!=0){
			printf("%d\n",NotZero(PrimeNum(i)));
		}
	}
	return 0;
}

/*�ж������Ƿ�Ϊ����*/
int PrimeNum(int Num){
	int i;
	for(i=2;i<Num;i++){
		if(Num%i==0){
			break;//����ܱ�ĳ��ֵ����������˴�ѭ����������������ֵΪ0�� 
		}else if(i==Num){//��һ�����ж��ܷ���ֵ�Լ������ġ� 
			return Num;
		}
	}
}

/*�����Ϊ0����*/
int NotZero(int val){
	if(val!=0){
		return val;
	}
}

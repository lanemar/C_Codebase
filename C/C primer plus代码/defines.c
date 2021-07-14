#include <stdio.h>
#include <limits.h>	//�������� 
#include <float.h>	//���������� 

int main(void){
	printf("Some munber limits for this system;\n");
	printf("Biggest int:%d\n",INT_MAX);//int���ֵ 
	printf("Smallest long long:%lld\n",LLONG_MIN);//long long int��Сֵ 
	printf("One byte=%d bits on this system.\n",CHAR_BIT);
	printf("Largest double:%e\n",DBL_MAX);// ����˫����ֵ 
	printf("Smallest normal float:%e\n",FLT_MIN);//����ȫ�����ȵ�float������С���� 
	printf("float prectsion=%d digits\n",FLT_DIG);//float���͵�������Ч����λ�� 
	printf("float epsilon=%e\n",FLT_EPSILON);//1�ͱ�1�����Сfloat����֮��Ĳ�� 
	return 0;
}

/*
Running Result:
--------------------------------
Some munber limits for this system;
Biggest int:2147483647
Smallest long long:-9223372036854775808
One byte=8 bits on this system.
Largest double:1.797693e+308
Smallest normal float:1.175494e-038
float prectsion=6 digits
float epsilon=1.192093e-007
--------------------------------
*/

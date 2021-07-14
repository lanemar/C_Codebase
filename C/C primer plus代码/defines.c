#include <stdio.h>
#include <limits.h>	//整型限制 
#include <float.h>	//浮点型限制 

int main(void){
	printf("Some munber limits for this system;\n");
	printf("Biggest int:%d\n",INT_MAX);//int最大值 
	printf("Smallest long long:%lld\n",LLONG_MIN);//long long int最小值 
	printf("One byte=%d bits on this system.\n",CHAR_BIT);
	printf("Largest double:%e\n",DBL_MAX);// 最大的双精度值 
	printf("Smallest normal float:%e\n",FLT_MIN);//保留全部精度的float类型最小整数 
	printf("float prectsion=%d digits\n",FLT_DIG);//float类型的最少有效数字位数 
	printf("float epsilon=%e\n",FLT_EPSILON);//1和比1大的最小float类型之间的差距 
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

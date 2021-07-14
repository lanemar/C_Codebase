/*
	通过试验（ 即编写带有此类问题的程序） 观察系统如何处理整数上
	溢、 浮点数上溢和浮点数下溢的情况。
*/
#include <stdio.h>
#include <limits.h>
#include <float.h> 

int main(void){
	int big_int=2147483647;
	float big_float=3.4e38;
	float small_float=10.0/3;
	printf("The big int data is %d\n",big_int+1);//int的最大值溢出 
	printf("The big float data is %f\n",big_float*10);//越界造成输出INF 
	printf("The big float data is %f\n",small_float);//强制转换造成精度下降 
	printf("The MAX float data is %f\n",FLT_MAX);//输出float类型的最大值 
	printf("The MAX int data is %ld",INT_MAX);//输出int类型的最大值 
	return 0;
} 

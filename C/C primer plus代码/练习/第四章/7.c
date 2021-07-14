/*
	编写一个程序， 将一个double类型的变量设置为1.0/3.0， 一个float类
	型的变量设置为1.0/3.0。 分别显示两次计算的结果各3次： 一次显示小数点
	后面6位数字； 一次显示小数点后面12位数字； 一次显示小数点后面16位数
	字。 程序中要包含float.h头文件， 并显示FLT_DIG和DBL_DIG的值。 1.0/3.0
	的值与这些值一致吗？
*/
#include <stdio.h>
#include <float.h>

int main(void){
	double a=1.0/3.0;
	float b=1.0/3.0;
	/*double的精度位数最高是16位，从0开始一直到15，15位之后的小数精度有损失不具有参考价值。*/
	printf("double number:\n");
	printf("%.6lf\n",a);
	printf("%.12lf\n",a);
	printf("%.16lf\n",a);
	/*float的精度位数最高是6位，大于6位的小数精度开始损失，不具有实际参考价值。*/
	printf("float number:\n");
	printf("%.6f\n",b);
	printf("%.12f\n",b); 
	printf("%.16f\n",b);
	/*float.h头文件中对两种类型精度的定义。*/
	printf("两种类型精度\n"); 
	printf("float:%d\n",FLT_DIG);
	printf("double:%d\n",DBL_DIG); 
	return 0;
}
/*
Running Result:
--------------------------------
double number:
0.333333
0.333333333333
0.333333333333333310
float number:
0.333333
0.333333343267
0.3333333432674408
两种类型精度
float:6
double:15
--------------------------------
*/ 

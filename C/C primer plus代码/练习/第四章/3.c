/*
	编写一个程序， 读取一个浮点数， 首先以小数点记数法打印， 然后
	以指数记数法打印。 用下面的格式进行输出（ 系统不同， 指数记数法显示
	的位数可能不同） ：
	a.输入21.3或2.1e+001；
	b.输入+21.290或2.129E+001；
*/
#include <stdio.h>

int main(void){
	double a;
	printf("请输入：");
	scanf("%lf",&a);
	printf("%.1lf,%.1e\n",a,a);
	printf("%.3lf,%.3e",a,a);
	return 0;
}

/*
	编写一个程序， 提示用户输入旅行的里程和消耗的汽油量。 然后计
	算并显示消耗每加仑汽油行驶的英里数， 显示小数点后面一位数字。 接下
	来， 使用1加仑大约3.785升， 1英里大约为1.609千米， 把单位是英里/加仑
	的值转换为升/100公里（ 欧洲通用的燃料消耗表示法） ， 并显示结果， 显
	示小数点后面 1 位数字。 注意， 美国采用的方案测量消耗单位燃料的行程
	（ 值越大越好） ， 而欧洲则采用单位距离消耗的燃料测量方案（ 值越低越
	好） 。 使用#define 创建符号常量或使用 const 限定符创建变量来表示两个
	转换系数。
*/
#include <stdio.h>
#define GALLON 3.785
#define INLE 1.609 

int main(void){
	double inl,gal;
	double km,l;
	printf("请入旅行的里程(INL)和消耗的汽油量(GAL)：");
	scanf("%lf %lf",&inl,&gal);
	printf("USA标准:%lf\n",inl/gal);
	l=gal*GALLON;
	km=inl*INLE;
	printf("Europe标准：约%lf升/公里",l/km);
	return 0;
}

/*
	1英寸相当于2.54厘米。 编写一个程序， 提示用户输入身高（ /英
	寸） ， 然后以厘米为单位显示身高。
*/
#include <stdio.h>
#define ONE_INC 2.54 //1inc=2.54cm 

int main(void){
	
	double cm;
	int inc;
	printf("请输入身高：");
	scanf("%d",&inc);
	cm=inc*ONE_INC;
	printf("%lf",cm);
	/*
	int cm;
	scanf("%d",&cm);
	printf("%.0lf",cm/ONE_INC);
	*/
	return 0;
}

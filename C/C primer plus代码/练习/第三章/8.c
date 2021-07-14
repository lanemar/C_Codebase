/*
	在美国的体积测量系统中， 1品脱等于2杯， 1杯等于8盎司， 1盎司等于2大汤勺， 1大汤勺等于3茶勺。 
	编写一个程序， 提示用户输入杯数， 并以品脱、 盎司、 汤勺、 茶勺为单位显示等价容量。 
	思考对于该程序， 为何使用浮点类型比整数类型更合适？
*/
#include <stdio.h>
#define PINT_CUT 2 //品脱 
#define CUT_OUNCE 8 //盎司 
#define OUNCE_SPOON 2 //大汤勺 
#define SPOON_TEA 3 //茶勺 

int main(void){
	int cutsize;
	double PINT;
	int OUNCE,SPOON,TEA; 
	printf("请输入杯数：");
	scanf("%d",&cutsize);
	PINT=(double)cutsize/PINT_CUT;
	OUNCE=cutsize*CUT_OUNCE;
	SPOON=OUNCE*OUNCE_SPOON;
	TEA=SPOON*SPOON_TEA;
	printf("约%.2lf品脱,%d盎司,%d大汤勺,%d茶勺。",PINT,OUNCE,SPOON,TEA);
	return 0;
}

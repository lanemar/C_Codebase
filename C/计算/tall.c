#include <stdio.h>

int main(){
	printf("请输入升高的英尺和英寸：");
	float foot;
	float inch;
	scanf("%lf %lf",&foot,&inch);
	printf("你的升高为%f米",((foot + inch / 12) * 0.3048));
}

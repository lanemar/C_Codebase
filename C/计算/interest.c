#include <stdio.h>

int main(){
	double principal;
	int years;
	printf("请输入要存入的本金额：\n");
	scanf("%lf",&principal);
	//static double a = principal;  //报错：[Error] initializer element is not constant 初始化器元素不是恒定的
	printf("请输入要存的年数：\n");
	scanf("%d",&years);
	//static int b = years; //报错：[Error] initializer element is not constant 初始化器元素不是恒定的
	while(years--){
		double interest = principal * 0.033;
		printf("第%d年，利息为：%lf，加入利息后的额度为：%lf\n",years,interest,principal + interest);
		principal = principal + interest;
	}
	//printf("本金为：%lf，存入时长为：%d\n",a,b);  
	printf("当前总额度为：%lf\n",principal);
} 

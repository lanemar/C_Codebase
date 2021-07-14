#include <stdio.h>

int main(void){
	const int FREEZING=0;
	float temperature;
	int cold_days=0;
	int all_days=0;
	printf("Enter the list daily low temperatures.\n");
	printf("Use Celsius,and enter q to quit.\n");
	//利用scanf函数的返回值判断输入 
	while(scanf("%f",&temperature)==1){
		//每次输入数字则all_days+1 
		all_days++;
		//如果小于指定数字则cold_days+1 
		if(temperature<FREEZING)cold_days++;
	}
	if(all_days!=0){
		printf("%d days total:%.1f%% were below freezing.\n",all_days,100.0*(float)cold_days/all_days);
	}else if(all_days==0){
		printf("No data entered.\n");
	}else{
		
	}
	return 0;
} 

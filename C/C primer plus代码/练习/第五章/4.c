/*
	编写一个程序， 提示用户输入一个身高（ 单位： 厘米） ， 并分别以
	厘米和英寸为单位显示该值， 允许有小数部分。 程序应该能让用户重复输
	入身高， 直到用户输入一个非正值。 其输出示例如下：
	Enter a height in centimeters: 182
	182.0 cm = 5 feet, 11.7 inches
	Enter a height in centimeters (<=0 to quit): 168.7
	168.0 cm = 5 feet, 6.4 inches
	Enter a height in centimeters (<=0 to quit): 0
	bye
*/
#include <stdio.h>
#define FEET 30.48
#define INC 2.54

int main(void){
	int tall;
	double inc,feet;
	printf("请输入：");
	scanf("%d",&tall);
	while(tall>0){
		feet=tall/FEET;
		inc=(feet-(int)feet)*INC;
		printf("Enter a height in centimeters:%d\n",tall); 
		printf("%.1lf cm = %d feet, %.1lf inches",(double)tall,(int)feet,inc);
		printf("\n");
		printf("请输入：");
		scanf("%d",&tall);
	}
	
	return 0;
}

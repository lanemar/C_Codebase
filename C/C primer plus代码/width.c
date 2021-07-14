/*
	整数输出说明符的格式标记 
*/
#include <stdio.h>
#define PAGES 959
//#define PAFLO 1.1

int main(void){
	printf("*%d*\n",PAGES);
	printf("*%2d*\n",PAGES);
	printf("*%10d*\n",PAGES);
	//右对齐 
	//return 0;
	printf("*%-10d*\n",PAGES);
	//左对齐 
	//printf("*%5.2f*",PAFLO);
	//打印一个浮点数，字段宽为5；小数点后保留两位小数。 
	return 0;
} 
/*
Running Result:
--------------------------------
*959*
*959*
*       959*
*959       *
* 1.10*
--------------------------------
*/

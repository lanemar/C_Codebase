/*
	2021.03.25
	使用变宽输出字段 
*/
#include <stdio.h>

int main(void){
	unsigned width,precision;
	int number=256;
	double weight=242.5;
	printf("Enter a field width:\n");
	scanf("%d",&width);
	/*
		在转换说明符中间加入'*'表示通过程序输出格式，不过需要指定参数。 
	*/
	printf("The number is:%*d:\n",width,number);
	printf("Now enter a width and a precision:\n");
	scanf("%d %d",&width,&precision);
	printf("Weight=%*.*f\n",width,precision,weight);
	//第一个*控制的是字符宽度，即变量width。
	//第二个*控制的是小数位数，即变量precision。 
	printf("Done!\n");
	return 0;
}
/*
Running Result:
--------------------------------
Enter a field width:
6
The number is:   256:
Now enter a width and a precision:
8
3
Weight= 242.500
Done!
--------------------------------
*/

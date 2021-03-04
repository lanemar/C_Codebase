/*
	The problem to be solved:
	对int类型变量赋值字符类型的数值为什么可以正常输出。 
	为int类型变量赋予char值后编译器会使用ASCII表将字符转换为ASCII表上对应的编号，当然如果使用%c/%s输出这个int变量的话可以输出字符。 
	char类型的数据在int类型变量中是如何保存的。 
	解释同上个问题。 
*/
#include <stdio.h>
//#include <malloc.h>

int main(void){
	int a='a';
	//int a=97;//如果赋值为97，输出结果不变。 
	/*
		当为变量a赋值单个字符时，系统在编译的时候会自动进行隐式转换，即将字符转换为ASCII表中对于的数字。 
		(int a='a';) == (int a=(int)'a';)
		a在ASCII中编号为97。 
	*/
	//int a="Hello World";//[Warning] initialization makes integer from pointer without a cast
	//int * p;
	//p=&a; //[Warning] assignment from incompatible pointer type
	//printf("%c",*p);
	//char b=a;
	printf("%c\n",a);//输出a 
	printf("%d\n",a);//输出97 
	/*
		如果需要将保存在内存中的变量输出，需要注意输出控制符的使用，如果要输出原来的字符可以使用%c/%s，这样可以输出原来的字符，也相当于在进行了一次隐式转换。
		将原本存储在内存中ASCII码转回原来的字符进行输出。 
	*/ 
	return 0;
} 

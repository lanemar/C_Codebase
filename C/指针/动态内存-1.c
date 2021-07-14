#include <stdio.h>
#include <malloc.h>

int main(void){
	int * p=(int *)malloc(4);
	//这段代码定义了两块内存，一块是静态内存P，一块是动态内存。
	//在静态内存中指向的是动态内存的首地址。
	//因为定义了类型，所以在指向动态内存首地址时也相当于指向了该动态内存整体。
	int len; 
	int * pArr = (int *)malloc(sizeof(int)*len);
	//这一段代码用于定义动态数组。 
	// sizeof(int)在这里的作用是用sizeof函数的结果作为malloc的形参。
	 
}

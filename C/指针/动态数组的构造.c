#include <stdio.h>
#include <malloc.h>

int main(void){
	/*
	int * p=(int *)malloc(4);
	//这段代码定义了两块内存，一块是静态内存P，一块是动态内存。
	//在静态内存中指向的是动态内存的首地址。
	//因为定义了类型，所以在指向动态内存首地址时也相当于指向了该动态内存整体。
	*/
	int len; 
	printf("请输入长度：");
	scanf("%d",&len);
	int * pArr = (int *)malloc(sizeof(int)*len);
	//这一段代码用于定义动态数组。 
	// sizeof(int)在这里的作用是用sizeof函数的结果作为malloc的形参。
	//等价于静态数组 int pArr[len]; 
	int i;
	//为数组元素赋值。 
	for(i=0;i<len;i++){
		printf("请输入pArr[%d]：",i);
		scanf("%d",&pArr[i]);
		//动态数组和使用静态数组的用法一样。
		//其原理和pArr+1、pArr+2的原理一样。 
	}
	//输出数组的值。 
	for(i=0;i<len;i++){
		printf("%d\n",pArr[i]);
	}
	//释放pArr指向的内存。
	//只要main函数还在执行，该动态数组就不会被释放。 
	free(pArr);
	for(i=0;i<len;i++){
		printf("%d\n",pArr[i]);
	}
	//释放后输出的是随机值。 
}

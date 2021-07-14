#include <stdio.h>
#include <malloc.h>
void g(int **);

int main(void){
	int i=10;
	int * p=(int *)malloc(sizeof(int));//单级指针
	p=&i;//将动态指针P指向变量i的地址  
	//int ** q=&p;//二级指针 
	//指向指针变量p的地址 
	//int *** r=&q; //三级指针 
	//指向指针变量q的地址
	//多级指针不能跨级指向。
	
	
	 g(&p);//原p是int *类型的，如果加上取地址服&，就相当于取地址的地址，算是一个二级指针，函数中的形参应该使用type **类型。
	 printf("%d\n",i); 
	 printf("%d\n",*p);
	 printf("%#x\n",p);
	 free(p);//释放P所指向的堆内存地址  
	 printf("%d\n",i);//输出20 
	 printf("%d\n",*p);//输出20 
	 printf("%#x\n",p);
	 //因为是堆内存指向的i，所以在释放P指向的堆内存时，P与i的二级指向关系也会被释放。
	 //释放内存前：p→堆内存地址→i的地址
	 //释放内存后： p/→堆内存地址→i的地址
	return 0;
} 

void g(int ** q){
	//这里的形参对应main函数的&P。 
	**q=20; //以*q的内容的为地址的地址，可以直接更改到i的值。 
}

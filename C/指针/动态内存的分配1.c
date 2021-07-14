#include <stdio.h>
#include <malloc.h>

int main(void){
	int a=5;
	int * p=(int *)malloc(4);//分配动态内存。 
	p=&a;
	printf("%#x\n",&a);
	printf("%#x\n",p);
	printf("%d",*p);
	free(p);//释放P所指向的动态内存。 
	printf("%d\n",*p);
	printf("%#x\n",p);
	return 0;
} 
/*
malloc(int var):malloc后面的括号内必须有一个整型类的行参。
前面直接指明类型的变量都为静态变量。
静态变量不能由编程人员手动释放，只能由系统在运行完变量所在的函数后释放。，而动态内存可以使用free语句进行释放。 
*/

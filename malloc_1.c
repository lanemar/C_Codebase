/*
	在malloc函数前加上强制的类型转换是为了更好的代码可移植性。 
	在C中malloc函数返回的值是void*类型，void*可以隐式转换为任何类型的指针。
	在C++中也支持void*，但不支持对void*的隐式转换，所以需要进行强制的类型转换。 
	就是说：
		int * p=(int*)malloc(sizeof(int));GCC/G++编译无错误
		int * p=malloc(sizeof(int));仅在GCC中编译无错误，在G++中会编译不通过。 
	
*/

#include <stdio.h>
//#include <malloc.h>
#include <stdlib.h>

int main(void){
	//int a=1;
	printf("%d\n",sizeof(int));
	int * pArr;//int类型 
	pArr=malloc(5);//没有进行强制类型转换相当于是直接创建无类型变量，返回给pArr的地址也是无类型的(void *)。 
	/*这里相当于是创建了一个动态数组*/
	*pArr=1;//int类型 
	
	*(pArr+1)='a';// 这里是向后偏移了一个int的堆内存空间，实际占用一样为4个单元并且加上*Aprr一共为8个单元，只是初始化分配时只有5个单元。 
	
	//*(pArr+2)="这是一串字符";//[Warning] assignment makes integer from pointer without a cast 
	printf("%d\n",*pArr);//Output:1 
	printf("%d\n",sizeof(*pArr));//Output:4 
	printf("%p\n",pArr);
	//printf("%p\n",pArr+1);
	//printf("%p\n",pArr+2);
	printf("%c\n",*(pArr+1));//Output:'a' 
	printf("%d\n",sizeof(*(pArr+1)));//Output:4 
	//printf("%s\n",*(pArr+2));
	//printf("%p\n",);
	return 0;
} 

/*
Running Result:
--------------------------------
1
0000000000BC13E0
a
--------------------------------
*/ 

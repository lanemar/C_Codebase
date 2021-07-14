/*
	2021.02.21
	使主函数的两个参数在vak_Back函数中完成互换。
	
	任何编程语言都不可能做到更改静态变量的空间位置（地址）。 
	
*/

#include <stdio.h>

int val_Back(int *,int *);

int main(void){
	int a=3;
	int b=5;
	
	printf("before Addr:\n");
	printf("a.addr=%#x\n",&a);
	printf("b.addr=%#x\n",&b);
	
	printf("\n");
	val_Back(&a,&b); 
	printf("a=%d,b=%d\n",a,b);
	printf("\n");
	
	printf("after Addr:\n");
	printf("a.addr=%#x\n",&a);
	printf("b.addr=%#x\n",&b);
	
	return 0;
} 

int val_Back(int * a,int * b){
	int i;
	i=*a;
	*a=*b;
	*b=i;
	
	/*
	int * i;
	i=&a;
	&b=&a;
	&b=i; 
	*/
	
	/*
	int * i; 
	i=a;
	a=b;
	b=i;
	//这样只是互换了形参的地址 
	*/
	return 0;
}

/*
Running result：
a=5,b=3 
*/

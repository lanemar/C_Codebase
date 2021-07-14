/*
	2021.02.23
	学习函数指针 
*/

#include <stdio.h>

int  val_Max(int,int);

int main(void){
	int (*p)();//创建函数指针,就是定义指向函数的指针变量 
	p=val_Max;//指向函数的栈地址 
	printf("%d\n",p(1,2));//p()等价于val_Max() 
	//printf("%d\n",val_Max(1,2));
	//val_Max(1,2);
	//printf("%#x\n",p);
	return 0;
}

int val_Max(int a,int b){
	//printf("%#x\n",&a); 
	
	if(a>b){
		return a;
	}else{
		return b;
	}
	
}

/*
Running Result:
--------------------------------
2
2
--------------------------------
Process exited after 0.06743 seconds with return value 0
*/

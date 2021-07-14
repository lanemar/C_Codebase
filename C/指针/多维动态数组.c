#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *a,*b,*c;
	a=new int;//申请分配一个int类型的内存空间。 
	b=new int(10);//申请分配一个int类型的内存空间存放10。 
	c=new int[10];//申请10个int类型的内存空间。
	 
	return 0;
}

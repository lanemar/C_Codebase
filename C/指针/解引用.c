#include <stdio.h>

int main(void){
	int i=1;
	int * p;
	printf("%#x",p);
	p=&i;
	*p=i;
	printf("%d",*p);
	return 0;
}

/*
理解并记住：*p是以p的内容为地址的变量。
如果给p赋值i的地址，那么*p就是以i的地址为地址的变量，最终指向的是i。 
*/

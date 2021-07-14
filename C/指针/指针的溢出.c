/*
	这个代码的逻辑有错误。
	a函数执行完被释放后，变量i也被释放了，所以主函数中的printf语句理论上是不能读取到i的值。 
*/

#include <stdio.h>
#include <stdlib.h>

int a(int **);

int main(void){
	/*
	char * p="abcdefg";
	int i;
	int ** a=&p;
	char *** r=&a;
	*/
	/* 
	for(i=0;i<7;i++){
		printf("%c",*p++);//*p++会改变*p的值。 
	}
	printf("\n");
	//printf("%c\n",*p+1);
	*/
	int * p;
	a(&p);
	printf("%d",*p);
	return 0;
}

int a(int ** r){
	int i =5;
	*r=&i;//*r=p p=&i,因为r保存的是p的地址，*r就是p。 
}

/*
Running Result:
5 
*/

#include <stdio.h>
#include <malloc.h>
void g(int **);
/*静态指针跨函数调用： 
int main(void){
	
	int * p;
	g(&p); //想更改P的值只能发送P的地址给G函数。 
	printf("%d\n",*p);//错误的，P所指向的变量i已被系统释放，此时还能读取到i的地址代表着内存已溢出。 
	return 0;
} 

void g(int ** q){
	int i=10;
	*q=&i;//*q代表p，而p是指针变量，所以需要传的是i的地址。 
}
*/

/*动态指针跨函数调用：*/
int main(void){
	int * p;
	g(&p);
	printf("%d\n",*p);
} 

void g(int ** q){
	*q=(int *)malloc(sizeof(int)); 
	//*q等价于p
	//相当于为p创建了一个动态指针 
	**q=10;
	//如果没有动态内存，在G函数执行完后会被释放。 
}

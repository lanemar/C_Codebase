#include <stdio.h>

int main(void){
	/*
	int * pt;
	int ar1[2][3]={1,2,3,4,5,6};
	int **p2;
	*p2=ar1[0];
	printf("%d\n",ar1[0][0]); 
	*/
	/*
	int x = 20;
	const int y = 23;
	int * p1 = &x;
	const int * p2 = &y; 
	const int ** pp2 = &p2;
	
		[警告]赋值从指针目标类型中放弃了'const'限定符
		相当于p1指向了p2的地址，和p1=&y一样。
		最好不要把const指针赋值给非const指针。 
	
	p1=p2; 
	//p2=p1; //有效，一级指针允许将非const指针赋值给const指针。 
	//pp2=&p2;
	printf("p2 = %#x\n",p2);
	printf("%d\n",**pp2);
	*//*
		这里p2所指向的地址会被更改，这样是不安全的。 
		因为这与const位置有关，这里const的限制仅在不可更改所
		指向地址的值，但是可以更改所指向的地址，而p2也是仅限
		制不可更改值，导致*pp2进行重定向操作是合法的。 
	
	*pp2=&x;
	printf("p2 = %#x\n",p2);
	printf("%d\n",**pp2);
	*/
	/*
	const int **pp2;
	int *p1;
	const int n = 13;
	
	pp2=&p1; 
	p1=&n;
	*p1=5;
	
	pp2=&p1;	// pp2 -> p1 
	
	*pp2=&n;	//*pp2 = p1，pp2所指向的地址是p1，相当于对p1的地址进行解引用。 
	 
	*p1=10;		//p1 -> n，*p1等于对p1指向的n的地址进行解引用，等价n。 
	
	
		pp2 ->　p1 -> n　
		*pp2 = p1
		*p = n
		**pp2 = n
	
	
	printf("%d",n);
	*/
	/*
	int ref[] = { 8, 4, 0, 2 };
	int *ptr;
	int index;
	for (index = 0, ptr = ref; index < 4; index++, ++ptr)
	printf("%d %d\n", ref[index], *ptr);
	*/
	int *ptr;
	int torf[2][2] = {12, 14, 16};
	ptr = torf[0];
	printf("%d,%d",*ptr,*(ptr+2));
	
	return 0;
}

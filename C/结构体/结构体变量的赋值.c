#include <stdio.h>
/*

结构体可以理解为复合型的数据类型。 

*/

/*struct表示定义一个结构体，相当于定义了一个数据类型，在主函数中使用需要声明该类型：struct var-name "name"。*/
struct students{
	int age;
	float socre;
	char sex;
};

int main(void){
	/* 第一种赋值方法： */
	struct students a = {22,95.5,'M'};//这里相当于定义了一个结构体变量a。 
	//在定义结构体变量的同时进行赋值。 
	
	/* 第二种赋值方法: */
	struct students a2;
	/*第一种取出结构体成员的方法；*/
	a2.age=22;
	a2.sex='M';
	a2.socre=99.9;
	//这种方法只能单个赋值。 
	
	/*第二种取出结构体成员方法：*/
	struct students * ptr = &a;//定义一个结构体类型的指针变量，这个变量只能存地址。
	ptr->age = 10;//在计算机内部运行时会被转化为(*ptr).age。 
	
	printf("%d\n %c\n",a.age,ptr->sex); 
	
	return 0;
} 

//定义的同时赋值：初始化

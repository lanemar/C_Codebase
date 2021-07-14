/*
	2021.02.28
	定义结构体并初始化。 
*/
/*
	//定义结构体 
	struct Std_a{
		... 
	}; 
	//声明结构体(main函数) 
	struct Std_a Std;
	//初始化结构体
	struct Std_a Std={...};//进行整体赋值
	Std.val_Name=val;//单个元素赋值 
*/

#include <stdio.h>

//定义
struct Std_a{
	int num;//std Number
	char name;//std Name
};

/*尽量使用第一种方法定义结构体(Std_a)*/

/*
struct Std_b{
	int num;//std Number
	char name;//std Name
}Stds_2; 
*/

/*
struct {
	int num;//std Number
	char name;//std Name
}Std_3;

*/

int main(void){
	
	//第一种初始化方法 
	struct Std_a Std_s1={123,'a'};//声明并初始化，这中只能在定义时一同赋值。 
	
	//第二种初始化方法
	struct Std_a Std_s2;//只能当个进行赋值 
	Std_s2.num=1;
	Std_s2.name='a';
	
 	return 0;
}

/*
	2021.02.28
	结构体与指针
	使用指针的方式对结构体中的元素进行赋值。 
*/

#include <stdio.h>

struct Std_a{
	int std_Num;
	char std_Name;
};	
	
int main(void){
	struct Std_a std_s1;
	
	//创建结构体指针
	struct Std_a * str_Ptr=&std_s1;
	
	//使用指针进行赋值 
	str_Ptr->std_Num=1; 
	str_Ptr->std_Name='a';
	/*
		这种方式等价于*(std_s1).std_Num/.std_Name; 
	*/
	
	printf("%d,%c",std_s1.std_Num,std_s1.std_Name); 
	return 0;
} 

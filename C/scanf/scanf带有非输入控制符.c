/*
	2020.12.16
	测试scanf在输入控制符中包含非输入控制符。 
*/

#include <stdio.h>

int main(void){
	/*
	int i;
	scanf("m%d",&i);
	printf("%d",i);
	*/
	int i,j;
	char ch;
	scanf("%d",&i);
	printf("%d\n",i);
	scanf("%c",&ch);
	printf("%c",ch); 
	return 0;
}

/*
输出测试结果：
------------------------
123
i=0
m123
i=123 
------------------------ 
	
在scanf的输入控制符中加入非输入控制符则必须在输入是一并将非输入控制符手动输入。
	scanf("非输入控制符 输入控制符",指向变量名) 
"&参数名"：在scanf语句中表示将值赋给以这个值为地址的变量。(单个&表示取地址)  
*/

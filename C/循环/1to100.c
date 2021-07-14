/*
	2020.12.25
	1到100的数的总和。
	基础的for循环测试。 
*/

#include <stdio.h>

int main(void){
	int i,sum=0;
	/**/
	for(i=0;i<=100;i++)//for(第一表达式;第二表达式;第三表达式) ,只有在第二表达式判断通过，才能执行第三表达式。 
	{
		printf("第%d次循环：\n",i+1);
		printf("----------------------------\n");
		printf("bofore: sum=%d,i=%d\n",sum,i);//上一次循环 
		printf("\n");
		printf("now:	sum+i:%d+%d\n",sum,i);//记录sum=sum+i 
		printf("\n");
		sum=sum+i; 
		printf("after： sum=%d,i=%d\n",sum,i);//输出计算后的sum的值并查看i是否达到for循环第二表达式的条件 
		printf("----------------------------\n");
		printf("\n");
		if(i<100)
			printf("i=%d\n",i);//空语句
		else{
			printf("i=%d\n",i);
			printf("i到达100，符合i=100但不符合i<100，for循环判断跳出。\n");
		}			
	} 
	printf("sum=%d",sum);
}

/*
----------------------------
sum=5050
----------------------------

for(表达式1，表达式2，表达式3){
	语句。 
}
*/ 

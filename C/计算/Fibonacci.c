/*
	2021.01.12
	实现斐波那契数列：0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610...
	主要实现思想：F(0)=0，F(1)=1, F(n)=F(n - 1)+F(n - 2)（n ≥ 2，n ∈ N*）
	
	
*/

#include <stdio.h>

int main(void){
	int a=0,b=1;
	int fn,i;
	for(i=0;i<30;i++){
		//前两个数为固定的0和1，第三个数则是前两个数相加。
		if(i==0){
			fn=0;
		}else if(i==1){
			fn=1;
		}else{
			fn=a+b;
			a=b;//将a的值重赋值为b的值 f(n-2)
			b=fn;//将b的值重赋值为fn的值 f(n-1)
		}
		printf("%d\n",fn);
	}
} 

/*
输出结果为： 
-----------------------------------
0
1
1
2
3
5
8
13
21
34
55
89
144
233
377
610
987
1597
2584
4181
6765
10946
17711
28657
46368
75025
121393
196418
317811
514229
-----------------------------------
*/

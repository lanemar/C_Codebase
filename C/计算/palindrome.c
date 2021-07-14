/*
	2021.01.12
	输出100以内的回文数 
	思路：将数字倒过来对比原数，如果相等则输出该数字，不相等则跳过。
	主要的语句：k=k*10+i%10;i=i/10;
	比如i=121;k=0。
	第一次计算：k=0*10+121%10=1,i=121/10=12
	第二次计算：k=1*10+12%10=12,i=12/10=1
	第三次计算：k=12*10+1%10=121,i/10=0 
*/

#include <stdio.h>

int main(void){
	int i,j,k,count=0;
	for(i=1;i<100;i++){
		j=i;
		k=0;
		while(j>0){
			k=k*10+j%10;
			j=j/10;
		}
		if(k==i){
			printf("%d\n",k);
			count++;
		}	
	}
	printf("总共为：%d个数字",count);
}

/*
输出结果为： 
--------------------------------
1
2
3
4
5
6
7
8
9
11
22
33
44
55
66
77
88
99
总共为：18个数字 
--------------------------------
*/

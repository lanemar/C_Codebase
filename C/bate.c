/*
	switch循环注意点：
		如果case之间没有break语句，switch语句会顺序执行下去,直到执行完所有case或者遇到break语句。 
		case1->case2->case3->case4->case5->break/out 
*/ 
#include <stdio.h> 

int main(void){
	int i,s=0;
	for(i=1;i<=1000;i++){
		s=s+i;
		printf("%d\n",s);
	} 
	printf("%d",s);
	return 0;
} 

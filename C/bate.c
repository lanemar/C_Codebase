/*
	switchѭ��ע��㣺
		���case֮��û��break��䣬switch����˳��ִ����ȥ,ֱ��ִ��������case��������break��䡣 
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

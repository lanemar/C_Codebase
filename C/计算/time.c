#include <stdio.h>

int main(){
	int hour1,hour2;
	int minute1,minute2;
	printf("请输入小时："); 
	scanf("%d %d",&hour1,&hour2);
	printf("\n请输入分钟：");
	scanf("%d %d",&minute1,&minute2);
	int t1 = hour1 * 60 + minute1;
	int t2 = hour2 * 60 + minute2;
	int t = t2 - t1;
	printf("\n%d %d",t/60,t%60);
}

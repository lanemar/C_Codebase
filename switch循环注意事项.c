/*
	switchѭ��ע��㣺
		���case֮��û��break��䣬switch��������ж�������˳��ִ����ȥ,ֱ��ִ��������case��������break��䡣 
		case1->case2->case3->case4->case5->break/out 
*/ 
#include <stdio.h> 

int main(void){
	int x=1,y=0,a=0,b=0;
	switch(x){
		case 1:
			switch(y){
				case 0:
					a++;
					break;
				case 1:
					b++;
					break;
			}
			
		//case1û��break��䣬���Զ�����ִ��case2�� 
		
		case 2:
			a++;
			b++;
			break;
			
		//case2��break��䣬����ִ�е�break���󣬾�������ǰswitch��䡣 
			
		case 3:
			a++;
			b++;
	}
	printf("%d,%d",a,b);
	return 0;
} 

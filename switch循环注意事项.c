/*
	switch循环注意点：
		如果case之间没有break语句，switch语句会忽略判断条件的顺序执行下去,直到执行完所有case或者遇到break语句。 
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
			
		//case1没有break语句，会自动往下执行case2。 
		
		case 2:
			a++;
			b++;
			break;
			
		//case2有break语句，程序执行到break语句后，就跳出当前switch语句。 
			
		case 3:
			a++;
			b++;
	}
	printf("%d,%d",a,b);
	return 0;
} 

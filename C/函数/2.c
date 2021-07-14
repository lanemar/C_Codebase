#include <stdio.h>
int MaxNum(int,int);

int main(){
	int a=1,b=2,c=3,d=4,e=5,f=6;
	printf("%d",MaxNum(a,b));
} 

int MaxNum(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}




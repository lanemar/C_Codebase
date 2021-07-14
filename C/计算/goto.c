#include <stdio.h>

int main(){
	int i;
	loop1:for(i=0;i<5;i++){
		goto loop1;
		if(i>3){
			printf("aaa");
		}
	}
	return 0;
}

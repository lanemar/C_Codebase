#include <stdio.h>

int main(void){
	int i,j,k;
	scanf("%d",&i);
	for(j=1;j<=i;j++){
		if(i%2+1==2){
			printf("1");
		}else if(0==1){
			printf("1");
		}else{
			printf("0");
		}
		i=i/2;
	}
	return 0;
}

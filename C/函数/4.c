#include <stdio.h>

int main(){
	/*
	int i,j,val;
	scanf("%d",&val);
	for(i=0;i<=val;i++){
		for(j=2;j<i;j++){
			if(i%j==0){
				break;
			}
		}
		if(j==i){
			printf("%d\n",i); 
		}
	}
	*/
	
	int i;
	for(i=0;i<100;i++){
		if(i!=99){
			continue;
		}else if(i==99){
			printf("%d",i);
		}
	}
	return 0; 
	
}

#include <stdio.h>

int main(void){
	int i=0,sum=0;
	while(i<=100){
		sum=i+sum;
		i++;
	}
	printf("%d",sum);
	return 0;
}

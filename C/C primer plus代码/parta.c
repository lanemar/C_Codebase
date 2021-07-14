#include <stdio.h>

int count=0;
void report_count();
void accumulate(int k); 

int main(void){
	int value;
	register int i;
	printf("Enter a positive integer (0 to quit): ");
	while(scanf("%d",&value)==1 && value>0){
		++count;
		for(i=value;i>=0;i--){
			accumulate(i);
		}
		printf("Enter a positive integer (0 to quit): ");
	}
	return 0;
} 

void report_count(){
	printf("Loop executed %d times\n", count);
}

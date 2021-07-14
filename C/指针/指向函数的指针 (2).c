#include <stdio.h>
#include <stdlib.h>

int a(int **);

int main(void){
	int * p;
	int (*function_Ptr)(int**);//aº¯ÊýµÄÖ¸Õë 
	function_Ptr=a;
	function_Ptr(&p); 
	printf("%d\n",*p);
	//free(function_Ptr);
	free(p);
	printf("%d\n",*p);
	return 0;
}

int a(int **r){
	*r=malloc(sizeof *r);
	**r=1;
	return 0;
}

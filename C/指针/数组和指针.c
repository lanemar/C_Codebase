#include <stdio.h>

int arr_Show(int *);

int main(void){
	int a[16]={1,2,3};
	arr_Show(a);
	return 0;
}

int arr_Show(int * arr_Addr){
	int a=sizeof(arr_Addr);
	int size_Addr;
	while(a>0){
		a=a/2;
		size_Addr++;
	}
	printf("%d\n",size_Addr);
	int i;//Length
	for(i=0;i<size_Addr;i++){
		printf("%d\n",*(arr_Addr+i));
	}
	printf("%d",sizeof(arr_Addr));
	
	 
}

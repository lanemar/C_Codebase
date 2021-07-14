#include <stdio.h>

int main(void){
	printf("%d\n",sizeof(int));
	printf("int指针字节大小为：%d\n",sizeof(int *));
	printf("%d\n",sizeof(char));
	printf("char指针字节大小为：%d\n",sizeof(char *));
	printf("%d\n",sizeof(double));
	printf("double指针字节大小为：%d\n",sizeof(double *));
	return 0;
} 

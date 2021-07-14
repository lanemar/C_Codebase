/*
	打印类型大小
	sizeof()：以字节为单位给出指定类型的大小。 
	%zd：C99和C11提供的匹配sizeof的返回类型。 
*/
#include <stdio.h>

int main(void){
	printf("Type int has a size of %zd bytes.\n",sizeof(int));
	printf("Type char has a size of %zd bytes.\n",sizeof(char));
	printf("Type float has a size of %zd bytes.\n",sizeof(float));
	printf("Type double has a size of %zd bytes.\n",sizeof(double));
	printf("Type long has a size of %zd bytes.\n",sizeof(long));
	printf("Type long long has a size of %zd bytes.\n",sizeof(long long));
	getchar();//Enter结束 
	return 0;
}

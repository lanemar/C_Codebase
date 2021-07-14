#include <stdio.h>

int main(){
	double a,b;
	printf("请输入：\n");
	scanf("%e %e",&a,&b);
	printf("输出：%e",((a+b/12)*0.3)); 
	//printf("%lu\n",sizeof(float));此条代码能得到4。 
	//printf("%lu",sizeof(double));此条代码能得到8。 
	/*单精度浮点float的读取符号为%f，双精度浮点double的读取符号为%e。*/
} 

#include <stdio.h>
void ptr(int *,int);

/*
int main(void){
	int b[2];
	printf("%#x\n",&b[0]);//输出数组第一个元素的地址。 
	printf("%#x\n",b); 
} 
运行结果都是0x62fe10。 
*/

int main(void){
	int a[5]={1,2,3,4,5};
	ptr(a,5);
	printf("%d",a[3]);
	printf("\n");
	int i;
	for(i=0;i<5;i++){
		printf("%d",a[i]);
	}
} 

void ptr(int * a,int b){
	
	int i;
	for(i=0;i<b;i++){
		printf("%d",*(a+i));
	}
	
	*(a+3)=5;
	//a[3]=5;  a[i]等价*(a+3)。 
	//这里a[3]相当于*(a+3),指向的就是数组中的a[3]。 
	//下标本身就相当于指针，a在主函数中存储的本身就是第一个元素的地址。
	//在这个ptr函数中，指针形参a读到了这个地址（传参是从第一个地址开始的）。
	//此时形参a指向的是这个地址，而这个地址指向的是1。（a[0]=1） 
	//此时在函数中直接更改a[0]的值，是直接更改a[0]原有的值。
	//而由于函数中的a[0]是直接指向a的地址的原因，可以直接理解为"*(a+0)"。
	
	//*a[3]=5;	[Error] invalid type argument of unary '*' (have 'int')
	//[错误]一元'*'的无效类型参数（具有'int'）
	//此时加"*"，a[0]会变成无效变量，则会报错无效类型。 
}

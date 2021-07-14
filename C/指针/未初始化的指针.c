#include <stdio.h>

int main(){
	int a=10;
	int b=20;
	int * rtp;
	int * rtp_a;
	//rtp=NULL;//初始化指针变量为空指针。
	printf("%P\n",rtp);//输出结果为0。
	printf("%d\n",rtp); 
	rtp=&a;
	rtp_a=&b;
	printf("%d\n",*rtp);
	printf("%x\n",rtp);
	printf("%d\n",*rtp_a);
	printf("%x\n",rtp_a);
	printf("%d\n",*rtp_a-*rtp);//可以计算出结果为10. 
	printf("%x\n",rtp_a-rtp);
	rtp=rtp_a;//类型一致的指针变量可以进行相互赋值。 
	printf("%d\n",*rtp);
} 

/*
	
	指针变量在被声明而未初始化时，其中的值为垃圾值，没有任何意义。
	该垃圾值对于程序而言是没有任何权限的，既无法控制也无法读写。
	可以理解为这个未初始化的指针变量是在指向一个可用地址前是没有任何意义的。 
	
*/
/*

	动态内存分配中，当有几个指针指向该动态内存时，只需要对其中一个指针进行内存释放即可。
	 
*/

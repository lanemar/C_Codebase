/*
	2020.12.20
	对动态一维数组的元素进行排列组合 
*/

#include <stdio.h>
#include <malloc.h>//malloc和calloc的区别在于malloc在释放后不会清空原内存中的数据而calloc会在释放时清空数据。 

int main(void){
	int n;//数组长度变量 
	printf("请输入数组长度：");
	scanf("%d",&n);
	int * array[n];//创建栈指针 
	array[n]=(int *)malloc(sizeof(int)*n);//创建动态数组 
	/*使用栈指针指向堆内存中数组的首地址*/ 
	int a;
	printf("请输入：\n");
	for(a=0;a<n;++a){
		getchar();
		scanf("%d",&array[a]);//对动态数组的元素进行输入 
	}
	printf("\n");
	printf("输出结果为：\n");
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				if(array[i]!=array[j] && array[j]!=array[k] && array[k]!=array[i]){//排列 
					printf("%d,%d,%d  ",array[i],array[j],array[k]);
				}
			}
		}
	}
	free(array[n]);//释放动态内存 
	return 0;
} 

/*
--------------------------------------------
请输入数组长度：3
请输入：
1
2
3

输出结果为：
1,2,3  1,3,2  2,1,3  2,3,1  3,1,2  3,2,1
--------------------------------------------
*/ 

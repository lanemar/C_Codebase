/*
	给定一个整数数组 nums?和一个整数目标值 target，请你在该数组中找出 和为目标值 的那?两个?整数，并返回它们的数组下标。
	你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。 

	来源：力扣（LeetCode）
	链接：https://leetcode-cn.com/problems/two-sum
	著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
#include <stdio.h>
#include <stdlib.h>
int* twoSum(int*, int, int, int*);

int main(void){
	//returnSize用于表示返回的值的个数。 
	int i, numsSize,traget,returnSize;
	printf("数组元素个数：");
	scanf("%d",&numsSize);
	printf("和："); 
	scanf("%d",&traget);
	int * nums=malloc(sizeof(int)*numsSize);
	for(i=0;i<numsSize;i++){
		scanf("%d",&nums);
	}
	/*
	int *(*p)();
	p=twoSum;
	printf("[%d,%d]",p[returnSize-1],p[returnSize]);
	*/
	int * p;
	p=twoSum(nums,numsSize,traget,&returnSize);//指针函数返回的是地址 
	printf("%d",returnSize);
	printf("[%d,%d]",*p,*p+1);
	return 0;
} 
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int traget, int* returnSize){
    int i,j;
    int * ptr=malloc(sizeof(int)*2);//创建动态函数 
    for(i=0;i<numsSize-1;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==traget){   //这里有bug，CPU日志：0x0000000000401661 <+77>:	mov    (%rax),%edx 
                *returnSize=2;
                ptr[0]=i;
                ptr[1]=j;
                return ptr;//返回ptr的地址 
            }
        }
    }
    return 0;
}


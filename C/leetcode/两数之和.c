/*
	����һ���������� nums?��һ������Ŀ��ֵ target�������ڸ��������ҳ� ��ΪĿ��ֵ ����?����?���������������ǵ������±ꡣ
	����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ�������ͬһ��Ԫ�ز���ʹ�����顣 

	��Դ�����ۣ�LeetCode��
	���ӣ�https://leetcode-cn.com/problems/two-sum
	����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
*/
#include <stdio.h>
#include <stdlib.h>
int* twoSum(int*, int, int, int*);

int main(void){
	//returnSize���ڱ�ʾ���ص�ֵ�ĸ����� 
	int i, numsSize,traget,returnSize;
	printf("����Ԫ�ظ�����");
	scanf("%d",&numsSize);
	printf("�ͣ�"); 
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
	p=twoSum(nums,numsSize,traget,&returnSize);//ָ�뺯�����ص��ǵ�ַ 
	printf("%d",returnSize);
	printf("[%d,%d]",*p,*p+1);
	return 0;
} 
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int traget, int* returnSize){
    int i,j;
    int * ptr=malloc(sizeof(int)*2);//������̬���� 
    for(i=0;i<numsSize-1;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==traget){   //������bug��CPU��־��0x0000000000401661 <+77>:	mov    (%rax),%edx 
                *returnSize=2;
                ptr[0]=i;
                ptr[1]=j;
                return ptr;//����ptr�ĵ�ַ 
            }
        }
    }
    return 0;
}


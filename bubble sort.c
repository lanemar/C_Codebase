/*
	2021.03.02
	冒泡排序法：从数组的第一个元素开始，使用第一个元素与剩下的元素进行对比，
				第一个对比完成后在从第二个元素为起始，与除第一个元素外剩下的元素进行对比，直到最后一个元素和倒数第二个元素对比完成。 
*/

#include <stdio.h>

void bubble_Sort(int *,int);
void bubble_Sort_b(int *,int);

int main(void){
	int i,j;
	int a[5]={1,5,3,4,2};
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\n"); 
	bubble_Sort(a,5);	 
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\n"); 
	bubble_Sort_b(a,5);
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	return 0;
} 

void bubble_Sort(int * sort_ptr,int len){
	int t;
	int i,j;
	//要进行对比的数字个数 
	for(i=0;i<len-1;i++){ 
		//每个数字要进行对比的次数 
		for(j=0;j<len-1-i;j++){
			//倒序 
			if(sort_ptr[j]<sort_ptr[j+1]){
				t=sort_ptr[j];
				sort_ptr[j]=sort_ptr[j+1];
				sort_ptr[j+1]=t; 
			}
			
		}
	}
}

void bubble_Sort_b(int * sort_ptr,int len){
	int t;
	int i,j;
	//要进行对比的数字个数 
	for(i=0;i<len-1;i++){ 
		//每个数字要进行对比的次数 
		for(j=0;j<len-1-i;j++){
			//升序 
			if(sort_ptr[j]>sort_ptr[j+1]){
				t=sort_ptr[j];
				sort_ptr[j]=sort_ptr[j+1];
				sort_ptr[j+1]=t; 
			}
			
		}
	}
}

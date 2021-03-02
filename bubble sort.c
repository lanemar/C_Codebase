/*
	2021.03.02
	ð�����򷨣�������ĵ�һ��Ԫ�ؿ�ʼ��ʹ�õ�һ��Ԫ����ʣ�µ�Ԫ�ؽ��жԱȣ�
				��һ���Ա���ɺ��ڴӵڶ���Ԫ��Ϊ��ʼ�������һ��Ԫ����ʣ�µ�Ԫ�ؽ��жԱȣ�ֱ�����һ��Ԫ�غ͵����ڶ���Ԫ�ضԱ���ɡ� 
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
	//Ҫ���жԱȵ����ָ��� 
	for(i=0;i<len-1;i++){ 
		//ÿ������Ҫ���жԱȵĴ��� 
		for(j=0;j<len-1-i;j++){
			//���� 
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
	//Ҫ���жԱȵ����ָ��� 
	for(i=0;i<len-1;i++){ 
		//ÿ������Ҫ���жԱȵĴ��� 
		for(j=0;j<len-1-i;j++){
			//���� 
			if(sort_ptr[j]>sort_ptr[j+1]){
				t=sort_ptr[j];
				sort_ptr[j]=sort_ptr[j+1];
				sort_ptr[j+1]=t; 
			}
			
		}
	}
}

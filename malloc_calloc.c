/*
	2020.12.20
	�Զ�̬һά�����Ԫ�ؽ���������� 
*/

#include <stdio.h>
#include <malloc.h>//malloc��calloc����������malloc���ͷź󲻻����ԭ�ڴ��е����ݶ�calloc�����ͷ�ʱ������ݡ� 

int main(void){
	int n;//���鳤�ȱ��� 
	printf("���������鳤�ȣ�");
	scanf("%d",&n);
	int * array[n];//����ջָ�� 
	array[n]=(int *)malloc(sizeof(int)*n);//������̬���� 
	/*ʹ��ջָ��ָ����ڴ���������׵�ַ*/ 
	int a;
	printf("�����룺\n");
	for(a=0;a<n;++a){
		getchar();
		scanf("%d",&array[a]);//�Զ�̬�����Ԫ�ؽ������� 
	}
	printf("\n");
	printf("������Ϊ��\n");
	int i,j,k;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				if(array[i]!=array[j] && array[j]!=array[k] && array[k]!=array[i]){//���� 
					printf("%d,%d,%d  ",array[i],array[j],array[k]);
				}
			}
		}
	}
	free(array[n]);//�ͷŶ�̬�ڴ� 
	return 0;
} 

/*
--------------------------------------------
���������鳤�ȣ�3
�����룺
1
2
3

������Ϊ��
1,2,3  1,3,2  2,1,3  2,3,1  3,1,2  3,2,1
--------------------------------------------
*/ 

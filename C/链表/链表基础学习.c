/*
	2021.03.07
	����
		�׽ڵ㣺�����Ч���ݵĵ�һ���ڵ㡣 
		β�ڵ㣺�����Ч���ݵ����һ���ڵ㡣 
		ͷ��㣺���׽ڵ�ǰ�������洢��Ч���ݡ� 
		ͷָ�룺ͷ�ڵ�ĵ�ַ�� 
		ͷָ����洢ͷ���ĵ�ַ��ͷ�ڵ㲻�洢���ݵ��洢�׽ڵ�ĵ�ַ��
		β�ڵ��ָ����Ϊnull(��)�� 
		
		[Error] void value not ignored as it ought to be
		���󣺰�'����ֵΪ�յĺ���'�ķ���ֵ�����һ���������ͱ����� 
		
	������棺	1������malloc ��
				2������������и�ֵ �� 
				3������ǰmalloc��ָ�����ÿ� ��
				4������һ��malloc��ָ����ָ��ǰmalloc�������� �� 
				5������λ�ƶ�����ǰmalloc �� 
				6���ظ�����1 �� 
				
	�߼����棺	1������ͷָ�벢ָ��ͷ��㡣 
				2������ͷ��㣬�����򲻱������ݣ�ָ����ָ���׽ڵ������� 
				3�������׽ڵ㣬���ݱ�����������ָ����ָ����һ���ڵ��������
				4���м�ڵ��ظ��׽ڵ�Ĵ������裬����ָ����ָ����һ�ڵ�������
				5������β�ڵ��ָ�����ÿա� 
*/ 

#include <stdio.h>
#include <stdlib.h>

struct Node_list{
	int list_data;
	struct Node_list * Next_Node;//ָ����һ���ṹ�����ݣ��洢��һ���ṹ��ĵ�ַ���� 
};
/* 
typedef struct Node_list{
	int list_data;
	struct Node_list * Next_Node;//ָ����һ���ṹ�����ݣ��洢��һ���ṹ��ĵ�ַ���� 
}RNOMS;
*/
struct Node_list * create_list();
void TraverseList(struct Node_list *);

int main(void){
	//struct Node_list head_list;
	struct Node_list * head_list_ptr=NULL; //ͷָ��
	head_list_ptr=create_list(); 
	TraverseList(head_list_ptr);
	return 0;
}

struct Node_list * create_list(void){
	int i;//�洢 
	int len;//���� 
	int val;//���� 
	struct Node_list * create_head = malloc(sizeof(struct Node_list));//����ͷ��㡣 
	if(create_head == NULL){
		printf("build failure");
		exit(-1);//��ֹ���� 
	}
	
	struct Node_list * phead=create_head;//������ʱ�洢ָ�롣 
	phead->Next_Node=NULL;//Ϊphead��ָ��Ԫ�ظ�NULL�� 
	
	printf("��������Ҫ�ĳ��ȣ�");
	scanf("%d",&len);
	for(i=0;i<len;i++){
		printf("�������%d�����ݣ�",i+1);
		scanf("%d",&val);
		struct Node_list * pNew=malloc(sizeof(struct Node_list));//ÿ��ѭ�����ᴴ��һ��malloc�� 
		/*�ж�malloc�Ƿ񴴽��ɹ�*/
		if(pNew==NULL){
			printf("build failure\n");
			exit(-1);
		}else{
			printf("buile ture\n");
		}
		//create_head=p_element;
		pNew->list_data=val;//����������ݴ��뵱ǰ�����е�������	
		pNew->Next_Node=NULL;//ָ����ǰpNew�ĵ�ַ��Ϊ�գ���Ϊ��Ҫ�洢��һ������ĵ�ַ�� 
		/*��ǰһ��Ԫ�ؽ����߼�����*/
		phead->Next_Node=pNew;//��ǰһ��Ԫ�صĵ�ַ��洢��ǰpNew�ĵ�ַ��
		phead=pNew; //����һ��Ԫ�ض�λ�����ڵ�Ԫ�� 
		//p_element=NULL;
	} 
	return create_head;
}

void TraverseList(struct Node_list * printf_PTR){
	struct Node_list * p = printf_PTR->Next_Node;
	int i;
	while(p!=NULL){
		printf("%d ",p->list_data);
		p=p->Next_Node;
		i++;
	} 
	printf("\n");
	printf("%d",i);
	free(printf_PTR);
}


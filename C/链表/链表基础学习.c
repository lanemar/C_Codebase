/*
	2021.03.07
	链表：
		首节点：存放有效数据的第一个节点。 
		尾节点：存放有效数据的最后一个节点。 
		头结点：在首节点前但并不存储有效数据。 
		头指针：头节点的地址。 
		头指针仅存储头结点的地址，头节点不存储数据但存储首节点的地址。
		尾节点的指针域为null(空)。 
		
		[Error] void value not ignored as it ought to be
		错误：把'返回值为空的函数'的返回值赋予给一个具体类型变量。 
		
	代码层面：	1、创建malloc ↓
				2、对数据域进行赋值 ↓ 
				3、将当前malloc的指针域置空 ↓
				4、将上一个malloc的指针域指向当前malloc的数据域 ↓ 
				5、将定位移动至当前malloc ↓ 
				6、重复步骤1 → 
				
	逻辑层面：	1、创建头指针并指向头结点。 
				2、创建头结点，数据域不保存数据，指针域指向首节点数据域。 
				3、创建首节点，数据保存在数据域，指针域指向下一个节点的数据域。
				4、中间节点重复首节点的创建步骤，并将指针域指向下一节点数据域。
				5、到达尾节点后，指针域置空。 
*/ 

#include <stdio.h>
#include <stdlib.h>

struct Node_list{
	int list_data;
	struct Node_list * Next_Node;//指向下一个结构体数据（存储下一个结构体的地址）。 
};
/* 
typedef struct Node_list{
	int list_data;
	struct Node_list * Next_Node;//指向下一个结构体数据（存储下一个结构体的地址）。 
}RNOMS;
*/
struct Node_list * create_list();
void TraverseList(struct Node_list *);

int main(void){
	//struct Node_list head_list;
	struct Node_list * head_list_ptr=NULL; //头指针
	head_list_ptr=create_list(); 
	TraverseList(head_list_ptr);
	return 0;
}

struct Node_list * create_list(void){
	int i;//存储 
	int len;//长度 
	int val;//数据 
	struct Node_list * create_head = malloc(sizeof(struct Node_list));//创建头结点。 
	if(create_head == NULL){
		printf("build failure");
		exit(-1);//终止程序。 
	}
	
	struct Node_list * phead=create_head;//创建临时存储指针。 
	phead->Next_Node=NULL;//为phead的指针元素赋NULL。 
	
	printf("请输入需要的长度：");
	scanf("%d",&len);
	for(i=0;i<len;i++){
		printf("请输入第%d个数据：",i+1);
		scanf("%d",&val);
		struct Node_list * pNew=malloc(sizeof(struct Node_list));//每次循环都会创建一个malloc。 
		/*判断malloc是否创建成功*/
		if(pNew==NULL){
			printf("build failure\n");
			exit(-1);
		}else{
			printf("buile ture\n");
		}
		//create_head=p_element;
		pNew->list_data=val;//将输入的数据存入当前链表中的数据域。	
		pNew->Next_Node=NULL;//指定当前pNew的地址域为空，因为还要存储下一个链表的地址。 
		/*与前一个元素进行逻辑连接*/
		phead->Next_Node=pNew;//将前一个元素的地址域存储当前pNew的地址。
		phead=pNew; //从上一个元素定位至现在的元素 
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


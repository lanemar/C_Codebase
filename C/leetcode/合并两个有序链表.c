#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2); 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/*˼·������l1��Ϊ���գ�l2�е�ÿ��Ԫ�غ�l1�е�Ԫ�����Աȣ���С�ڻ����l1��Ԫ��ʱ���Ͳ����ڸ�Ԫ�ص�ǰ�棻������ڸ�Ԫ�أ�������ڸ�Ԫ�غ��档���l1��l2����һ��Ϊ����ֱ�������Ϊ�յ���һ����*/

int main(void){
	struct ListNode *l1,*l2;//����ͷָ��
	int i,valsize,Ele;
	printf("������һ�����֣�");
	scanf("%d",&valsize); 
	struct ListNode * l1_main=malloc(sizeof(struct ListNode));
	struct ListNode * l1_temp=l1_main;
	l1_temp->next=NULL;
	struct ListNode * l2_main=malloc(sizeof(struct ListNode));
	struct ListNode * l2_temp=l2_main;
	l2_temp->next=NULL;
	printf("�������һ�飺\n"); 
	for(i=0;i<valsize;i++){
		struct ListNode * new_Ele=malloc(sizeof(struct ListNode));
		//scanf("%d",&Ele);
		//new_Ele->val=Ele;
		scanf("%d",&new_Ele->val);
		new_Ele->next=NULL;
		l1_temp->next=new_Ele;
		l1_temp=new_Ele;
	}
	printf("������ڶ��飺\n"); 
	for(i=0;i<valsize;i++){
		struct ListNode * new_Ele2=malloc(sizeof(struct ListNode));
		//scanf("%d",&Ele);
		//new_Ele2->val=Ele;
		scanf("%d",&new_Ele2->val);
		new_Ele2->next=NULL;
		l2_temp->next=new_Ele2;
		l2_temp=new_Ele2;
	}
	l1=l1_main;
	l2=l2_main;
	/*���������䣺 */
	/*
	struct ListNode * out_l1=l1->next;
	while(out_l1!=NULL){
		printf("%d\n",out_l1->val);
		out_l1=out_l1->next;
	} 
	printf("\n");
	struct ListNode * out_l2=l2->next;
	while(out_l2!=NULL){
		printf("%d\n",out_l2->val);
		out_l2=out_l2->next;
	} 
	*/
	/*�������������bug*/
	struct ListNode * func_struct=mergeTwoLists(l1,l2);
	struct ListNode * func_out=func_struct->next;
	while(func_out!=NULL){
		printf("%d",func_out->val);
		func_out=func_out->next;
	}
	return 0;
} 

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    /*
    //���൱�ڴ�����һ���µ��������ܻ�����ڴ������ȡ�ɵķ������á�
    struct ListNode * Element=malloc(sizeof(struct ListNode));
    struct ListNode * pre=Element;
    if(l1==NULL){
        return l2;
    }else if(l2==NULL){
        return l1;
    }
    while(l1&&l2){
        if(l1->val<l2->val){
            pre->next=l1;
            l1=l1->next; 
        }else{
            pre->next=l2;
            l2=l2->next;
        }
        pre=pre->next;
    }
    if(l1){
        pre->next=l1;
    }else{
        pre->next=l2;
    }
    return Element->next;
    */
    /*
    if(l1==NULL){
        return l2;
    }else{
        return l1;
    }
    */
    /*
    struct ListNode * newlist=malloc(sizeof(struct ListNode));
    while(l1->next!=NULL){
        while(l2->next!=NULL){
            if(l1->val>=l2->val){
                l2->next=l1;
                l1->next=l1;
            //newlist->next=l2;
            }else{
                l1->next=l2;
                l2->next=l1;
                l1->next=l1;
            //newlist->next=l2;
            }
        }
        //l1=li->next;
    }
    return l1;
    */
    /*���·Ƕ���д������ȫcopy���еĴ��룬���˼�ˮƽ����������������...��*/
    /*���·Ƕ���д������ȫcopy���еĴ��룬���˼�ˮƽ����������������...��*/
    /*���·Ƕ���д������ȫcopy���еĴ��룬���˼�ˮƽ����������������...��*/
    struct ListNode *head = NULL,*pre = NULL;;
    while(l1 != NULL || l2 != NULL)
    {
        if(head == NULL)
        {
            if(l1 == NULL)
            {
                return l2;
            }
            else if(l2 == NULL)
            {
                return l1;
            }
            else
            {
                if(l1->val <= l2->val)
                {
                    head = l1;
                    pre = head;
                    l1 = l1->next;
                }
                else
                {
                    head = l2;
                    pre = head;
                    l2 = l2->next;
                }
            }
        }
        else
        {
            if(l1 == NULL)
            {
                pre->next = l2;
                break;
            }
            else if(l2 == NULL)
            {
                pre->next = l1;
                break;
            }
            else
            {
                if(l1->val <= l2->val)
                {
                    pre->next = l1;
                    pre = pre->next;
                    l1 = l1->next;
                }
                else
                {
                    pre->next = l2;
                    pre = pre->next;
                    l2 = l2->next;
                }
            }
        }
    }
    return head;
}


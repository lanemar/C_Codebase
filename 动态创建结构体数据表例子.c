#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct std_S1{
	int std_Number;
	char std_Name[5];
	char std_Sex[1];
	int std_Age;
	char std_Class[10];
};

int InputArr_Len();//����ѧ������ 
void CreatMalloc_struct_S1(int);//�ṹ�弰��̬�ڴ� 
void Inputstruct_std(int,struct std_S1 * );//����ṹ����Ԫ�� 
void printf_Allstd(int,struct std_S1 * );//����ṹ����Ԫ�� 
void getChar_Var();//���� 

int main(void){
	//printf("%d",sizeof(struct std_S1)); 
	CreatMalloc_struct_S1(InputArr_Len());
	return 0;
}

/*��ѧ��������������*/
int InputArr_Len(){
	int i;
	printf("�����룺");
	scanf("%d",&i);
	return i;
}

/*����structָ�������Ϊ���ָ�봴����̬�ڴ�*/
void CreatMalloc_struct_S1(int Len){
	//struct std_S1 std_Var;
	//struct std_S1 * std_VarPTR=&std_Var;
	struct std_S1 * std_Ptr=malloc((sizeof *std_Ptr)* Len);
	//std_Ptr=std_VarPTR;
	int i;
	for(i=0;i<Len;i++){
		Inputstruct_std(i,&std_Ptr[i]);
	}
	for(i=0;i<Len;i++){
		printf_Allstd(i,&std_Ptr[i]);
		/*
		printf("��%d��ѧ������Ϣ��\n",i) ;
		printf("ѧ�ţ�%d\n",std_Ptr[i].std_Number);
		printf("������%s\n",std_Ptr[i].std_Name);
		printf("�Ա�%s\n",std_Ptr[i].std_Sex);
		printf("���䣺%d\n",std_Ptr[i].std_Age);
		printf("�༶��%s\n",std_Ptr[i].std_Class);
		*/
	}
}

/*�Խṹ���Ԫ�ؽ�������*/
void Inputstruct_std(int i,struct std_S1 * input_PTR){
	printf("�����%d��ѧ����Ϣ��\n",i+1);
	printf("������ѧ�ţ�"); 
	scanf("%d",&input_PTR->std_Number);
	//printf("\n");
	getChar_Var();
	//printf("\n");
	printf("������������");
	scanf("%s",input_PTR->std_Name);//char���Ͳ���Ϊ����ı�������Ҫ��"&"����Ϊ������������ľ���������׵�ַ�� 
	getChar_Var();
	//printf("\n");
	printf("�������Ա�");
	scanf("%s",input_PTR->std_Sex);
	getChar_Var();
	//printf("\n");
	printf("���������䣺");
	scanf("%d",&input_PTR->std_Age);
	getChar_Var();
	//printf("\n");
	printf("������༶��");
	scanf("%s",input_PTR->std_Class);
	getChar_Var();
	printf("\n");
}

/*����*/
void getChar_Var(){
	while(getchar()!='\n'){
		continue;
	}
}

/*����ṹ��Ԫ��*/
void printf_Allstd(int i,struct std_S1 * input_PTR){
	//int i;
	//for(i=0;i<Len;i++){
		printf("��%d��ѧ������Ϣ��\n",i+1) ;
		printf("ѧ�ţ�%d\n",input_PTR->std_Number);
		printf("������%s\n",input_PTR->std_Name);
		printf("�Ա�%s\n",input_PTR->std_Sex);
		printf("���䣺%d\n",input_PTR->std_Age);
		printf("�༶��%s\n",input_PTR->std_Class);
		printf("\n");
	//} 
	free(input_PTR);
}

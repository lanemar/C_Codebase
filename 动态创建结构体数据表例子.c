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

int InputArr_Len();//输入学生个数 
void CreatMalloc_struct_S1(int);//结构体及动态内存 
void Inputstruct_std(int,struct std_S1 * );//输入结构体子元素 
void printf_Allstd(int,struct std_S1 * );//输出结构体子元素 
void getChar_Var();//跳过 

int main(void){
	//printf("%d",sizeof(struct std_S1)); 
	CreatMalloc_struct_S1(InputArr_Len());
	return 0;
}

/*对学生个数进行输入*/
int InputArr_Len(){
	int i;
	printf("请输入：");
	scanf("%d",&i);
	return i;
}

/*创建struct指针变量并为这个指针创建动态内存*/
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
		printf("第%d个学生的信息：\n",i) ;
		printf("学号：%d\n",std_Ptr[i].std_Number);
		printf("姓名：%s\n",std_Ptr[i].std_Name);
		printf("性别：%s\n",std_Ptr[i].std_Sex);
		printf("年龄：%d\n",std_Ptr[i].std_Age);
		printf("班级：%s\n",std_Ptr[i].std_Class);
		*/
	}
}

/*对结构体的元素进行输入*/
void Inputstruct_std(int i,struct std_S1 * input_PTR){
	printf("输入第%d个学生信息：\n",i+1);
	printf("请输入学号："); 
	scanf("%d",&input_PTR->std_Number);
	//printf("\n");
	getChar_Var();
	//printf("\n");
	printf("请输入姓名：");
	scanf("%s",input_PTR->std_Name);//char类型并且为数组的变量不需要加"&"，因为其变量名本身存的就是数组的首地址。 
	getChar_Var();
	//printf("\n");
	printf("请输入性别：");
	scanf("%s",input_PTR->std_Sex);
	getChar_Var();
	//printf("\n");
	printf("请输入年龄：");
	scanf("%d",&input_PTR->std_Age);
	getChar_Var();
	//printf("\n");
	printf("请输入班级：");
	scanf("%s",input_PTR->std_Class);
	getChar_Var();
	printf("\n");
}

/*跳过*/
void getChar_Var(){
	while(getchar()!='\n'){
		continue;
	}
}

/*输出结构体元素*/
void printf_Allstd(int i,struct std_S1 * input_PTR){
	//int i;
	//for(i=0;i<Len;i++){
		printf("第%d个学生的信息：\n",i+1) ;
		printf("学号：%d\n",input_PTR->std_Number);
		printf("姓名：%s\n",input_PTR->std_Name);
		printf("性别：%s\n",input_PTR->std_Sex);
		printf("年龄：%d\n",input_PTR->std_Age);
		printf("班级：%s\n",input_PTR->std_Class);
		printf("\n");
	//} 
	free(input_PTR);
}

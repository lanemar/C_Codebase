#include <stdio.h>

/* ����һ���ṹ��students */

struct students{
	char name[100];
	int number;
	float socre;
}; 

int main(void){
	struct students st;//�����ṹ�������st
	struct students st2;
	struct students * stu=&st2;
	
	st.name[5]="������������";
	st.number=32;
	st.socre=99.9f;
	
	stu->name[1]="�ʵ�";
	stu->number=12;
	stu->socre=99.8f;
	
	printf("name=%s,number=%d,sorce=%f\n",st.name,st.number,st.socre);
	printf("name=%s,number=%d,sorce=%f\n",stu->name,stu->number,stu->socre); 
	
	return 0; 
}

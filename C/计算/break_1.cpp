/*
	2021.01.25
	��break��continue������ѧϰ��
	break����ֱ������ѭ����
	contiune��������ǰѭ��������������һ��ѭ���� 
	break��䲻��ֱ��������if��䡣 
	 
	 getchar()��������ȡ�û�������ַ��� 
*/
#include <stdio.h>

int main(){
	/*
	int i;
	for(i=0;i<10;i++){
		int a=i;
		break;
		//��ֱ�ӳ�ѭ��������ָ�����������䡣 
		//continue;
		//�������������䲢ִ��ѭ�����൱��������ǰ��ѭ����ִ����һ��ѭ���� 
		printf("a=%d",a);//���� 
	} 
	printf("i=%d",i);
	*/
	
	/*
	int i;
	for(i=0;i<10;i++){
		if(i<9){
			continue;
		}else{
			printf("9");
		}
	}
	*/
	int i=0,s=0;
	do{
		if(i%2){
			i++;
			continue;
		}
		i++;
		s+=i;
	}while(i<7);
	printf("%d\n",s);
	return 0;
}

/*
�����
----------------------------
break:
i=0
continue��
i=10
----------------------------	
*/

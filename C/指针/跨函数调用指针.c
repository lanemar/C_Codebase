#include <stdio.h>
#include <malloc.h>
void g(int **);
/*��ָ̬��纯�����ã� 
int main(void){
	
	int * p;
	g(&p); //�����P��ֵֻ�ܷ���P�ĵ�ַ��G������ 
	printf("%d\n",*p);//����ģ�P��ָ��ı���i�ѱ�ϵͳ�ͷţ���ʱ���ܶ�ȡ��i�ĵ�ַ�������ڴ�������� 
	return 0;
} 

void g(int ** q){
	int i=10;
	*q=&i;//*q����p����p��ָ�������������Ҫ������i�ĵ�ַ�� 
}
*/

/*��ָ̬��纯�����ã�*/
int main(void){
	int * p;
	g(&p);
	printf("%d\n",*p);
} 

void g(int ** q){
	*q=(int *)malloc(sizeof(int)); 
	//*q�ȼ���p
	//�൱��Ϊp������һ����ָ̬�� 
	**q=10;
	//���û�ж�̬�ڴ棬��G����ִ�����ᱻ�ͷš� 
}

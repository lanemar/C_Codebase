#include <stdio.h>

int main(void){
	/*
	int * pt;
	int ar1[2][3]={1,2,3,4,5,6};
	int **p2;
	*p2=ar1[0];
	printf("%d\n",ar1[0][0]); 
	*/
	/*
	int x = 20;
	const int y = 23;
	int * p1 = &x;
	const int * p2 = &y; 
	const int ** pp2 = &p2;
	
		[����]��ֵ��ָ��Ŀ�������з�����'const'�޶���
		�൱��p1ָ����p2�ĵ�ַ����p1=&yһ����
		��ò�Ҫ��constָ�븳ֵ����constָ�롣 
	
	p1=p2; 
	//p2=p1; //��Ч��һ��ָ��������constָ�븳ֵ��constָ�롣 
	//pp2=&p2;
	printf("p2 = %#x\n",p2);
	printf("%d\n",**pp2);
	*//*
		����p2��ָ��ĵ�ַ�ᱻ���ģ������ǲ���ȫ�ġ� 
		��Ϊ����constλ���йأ�����const�����ƽ��ڲ��ɸ�����
		ָ���ַ��ֵ�����ǿ��Ը�����ָ��ĵ�ַ����p2Ҳ�ǽ���
		�Ʋ��ɸ���ֵ������*pp2�����ض�������ǺϷ��ġ� 
	
	*pp2=&x;
	printf("p2 = %#x\n",p2);
	printf("%d\n",**pp2);
	*/
	/*
	const int **pp2;
	int *p1;
	const int n = 13;
	
	pp2=&p1; 
	p1=&n;
	*p1=5;
	
	pp2=&p1;	// pp2 -> p1 
	
	*pp2=&n;	//*pp2 = p1��pp2��ָ��ĵ�ַ��p1���൱�ڶ�p1�ĵ�ַ���н����á� 
	 
	*p1=10;		//p1 -> n��*p1���ڶ�p1ָ���n�ĵ�ַ���н����ã��ȼ�n�� 
	
	
		pp2 ->��p1 -> n��
		*pp2 = p1
		*p = n
		**pp2 = n
	
	
	printf("%d",n);
	*/
	/*
	int ref[] = { 8, 4, 0, 2 };
	int *ptr;
	int index;
	for (index = 0, ptr = ref; index < 4; index++, ++ptr)
	printf("%d %d\n", ref[index], *ptr);
	*/
	int *ptr;
	int torf[2][2] = {12, 14, 16};
	ptr = torf[0];
	printf("%d,%d",*ptr,*(ptr+2));
	
	return 0;
}

/*
	2021.03.25
	ʹ�ñ������ֶ� 
*/
#include <stdio.h>

int main(void){
	unsigned width,precision;
	int number=256;
	double weight=242.5;
	printf("Enter a field width:\n");
	scanf("%d",&width);
	/*
		��ת��˵�����м����'*'��ʾͨ�����������ʽ��������Ҫָ�������� 
	*/
	printf("The number is:%*d:\n",width,number);
	printf("Now enter a width and a precision:\n");
	scanf("%d %d",&width,&precision);
	printf("Weight=%*.*f\n",width,precision,weight);
	//��һ��*���Ƶ����ַ���ȣ�������width��
	//�ڶ���*���Ƶ���С��λ����������precision�� 
	printf("Done!\n");
	return 0;
}
/*
Running Result:
--------------------------------
Enter a field width:
6
The number is:   256:
Now enter a width and a precision:
8
3
Weight= 242.500
Done!
--------------------------------
*/

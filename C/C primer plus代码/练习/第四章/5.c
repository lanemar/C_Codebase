/*
	��дһ������ ��ʾ�û���������λÿ�루 Mb/s�� Ϊ��λ�������ٶȺ������ֽڣ� MB�� Ϊ��λ���ļ���С�� ������Ӧ�����ļ�������ʱ�䡣
	ע�⣬ ����1�ֽڵ���8λ�� ʹ��float���ͣ� ����/��Ϊ���š� 
	�ó���Ҫ������ĸ�ʽ��ӡ 3 ��������ֵ�� �����ٶȡ� �ļ���С������ʱ�䣩����ʾС���������λ���֣�
	At 18.12 megabits per second, a file of 2.20 megabytes
	downloads in 0.97 seconds.
*/
#include <stdio.h>
#define B 8
#define KB 1024
#define MB 1024
//#define GB 1024
//#define TB 1024

int main(void){
	float speed,time,size;
	printf("�����������ٶ�(Mb/s)���ļ���С(MB):");
	scanf("%f %f",&speed,&size);
	time=size*8/speed;
	printf("At %.2f megabits per second, a file of %.2f megabytes\n",speed,size);
	printf("downloads in %.2f seconds",time);
	return 0;
}

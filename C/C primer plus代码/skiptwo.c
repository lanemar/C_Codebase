/*
	2021.03.25
	��scanf�����У���'*'����%��ת���ַ�֮���������Ӧ������ 
*/
#include <stdio.h>

int main(void){
	int n;
	printf("Please enter three integers:\n");
	scanf("%*d %*d %d",&n);
	/*
		ǰ����%d��Ϊ�м������*�ţ�������scanf������ȡ��ʱ�������ˡ� 
	*/
	printf("The last integers was %d\n",n);
	return 0;
} 
/*
Running Result:
--------------------------------
Please enter three integers:
1
2
3
The last integers was 3
--------------------------------
*/

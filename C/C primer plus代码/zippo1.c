/*
	��ά����֮��Ĺ�ϵ�� 
*/
#include <stdio.h>

int main(void){
	int zippo[4][2] = { { 2, 4 }, { 6, 8 }, { 1,3 }, { 5, 7 } };
	printf("zippo[0] = %#x, 	zippo+1 = %#x\n",zippo,zippo+1);
	printf("zippo[0] = %#x, 	zippo[0]+1 = %#x\n",zippo[0],zippo[0]+1);
	printf("*zippo = %#x,	*zippo+1 = %#x\n",*zippo,*zippo+1);
	printf("zippo[0][0] = %d\n",zippo[0][0]);
	printf("*zippo[0] = %d\n",*zippo[0]);
	//printf("*zippo[0] = %d\n",*(zippo[0])+1);
	/*---
		**zippo:�Ƚ�����zippo[0]�ĵ�ַ�ٽ�����zippo[0][0]�ĵ�ַ��
		�൱�������ǵ�[0]�ĵ�ַ����[0]����ĵ�ַ�� 
	---*/
	printf("**zippo = %d\n",**zippo);//���ν����á� 
	printf("zippo[2][1] = %d\n",zippo[2][1]);
	/*---
		*(*(zippo+2)+1)������ô��⣺
		*(zippo+2)����ָ���zippo[0][0]����zippo[2][0],�ٽ��н����á�
		*(*(zippo+2)+1)����ָ���zippo[2][0]����zippo[2][1], �ٽ��н�Ӧ�á�	 
	---*/
	printf("*(*(zippo+2)+1) = %d\n",*(*(zippo+2)+1));
	return 0;
} 

/*
Running Result:
------------------------------------------------
zippo[0] = 0x62fe00,    zippo+1 = 0x62fe08
zippo[0] = 0x62fe00,    zippo[0]+1 = 0x62fe04
*zippo = 0x62fe00,      *zippo+1 = 0x62fe04
zippo[0][0] = 2
*zippo[0] = 2
**zippo = 2
zippo[2][1] = 3
*(*(zippo+2)+1) = 3
------------------------------------------------
*/

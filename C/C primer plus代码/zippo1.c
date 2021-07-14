/*
	二维数组之间的关系。 
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
		**zippo:先解引用zippo[0]的地址再解引用zippo[0][0]的地址。
		相当于是先那到[0]的地址再找[0]下面的地址。 
	---*/
	printf("**zippo = %d\n",**zippo);//两次解引用。 
	printf("zippo[2][1] = %d\n",zippo[2][1]);
	/*---
		*(*(zippo+2)+1)可以这么理解：
		*(zippo+2)：将指针从zippo[0][0]移至zippo[2][0],再进行解引用。
		*(*(zippo+2)+1)：将指针从zippo[2][0]移至zippo[2][1], 再进行解应用。	 
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

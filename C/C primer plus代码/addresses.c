#include <stdio.h>
#define MSG "I'm special"

int main(void){
	char ar[]=MSG;
	const char * pt=MSG;
	printf("address of \"I'm special\": %#x \n", "I'm special");
	printf("address ar: %#x\n", ar);
	printf("address pt: %#x\n", pt);
	printf("address of MSG: %#x\n", MSG);
	printf("address of \"I'm special\": %#x \n", "I'm special");
	return 0;
}
/*
Running Result:
-----------------------------------
address of "I'm special": 0x404000
address ar: 0x62fe00
address pt: 0x404000
address of MSG: 0x404000
address of "I'm special": 0x404000
-----------------------------------
*/

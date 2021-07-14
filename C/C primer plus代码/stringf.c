/*
	2021.03.23
	字符串输出标记格式 
*/
#include <stdio.h>
#define BLURB "Authentic imitation!"

int main(void){
	printf("[%2s]\n",BLURB);
	printf("[%24s]\n",BLURB);
	/*在输出字符串时添加精度表示限制输出字符的个数，比如.5表示只输出5个字符。*/
	printf("[%24.5s]\n",BLURB);
	printf("[%-24.5s]\n",BLURB);
	//printf("The %40s family just may be $%5.2f dollars richer!","wing yam",520.1314);
	return 0;
}
/*
Running Result:
--------------------------------
[Authentic imitation!]
[    Authentic imitation!]
[                   Authe]
[Authe                   ]
--------------------------------
*/

/*
	2021.03.24
	打印较长的字符串及字符串断行的3种方法。 
*/
#include <stdio.h>

int main(void){
	/*第一种*/
	printf("Here's ont way to print a");
	printf("long string.\n"); 
	/*第二种*/
	printf("Here's another way to print a \
	long string.\n");
	/*第三种*/
	printf("Here's the newest way to print a "
	"long string.\n");//ANSIC
	return 0;
}
/*
Running Result:
--------------------------------
Here's ont way to print along string.
Here's another way to print a   long string.
Here's the newest way to print a long string.
--------------------------------
*/

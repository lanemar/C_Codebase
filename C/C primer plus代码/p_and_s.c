#include <stdio.h>

int main(void){
	const char * mesg="Don't be a fool!";
	const char *copy;
	copy=mesg;
	printf("%s\n", copy);
	printf("mesg = %s; &mesg = %#x; value = %#x\n", mesg, &mesg, mesg);
	printf("copy = %s; &copy = %#x; value = %#x\n", copy, &copy, copy);
	return 0;
} 

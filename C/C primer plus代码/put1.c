#include <stdio.h>

void put1(const char*);

int main(void){
	
	return 0;
}

void put1(const char *string){
	while(*string!='\0'){
		putchar(*string++);
	}
}

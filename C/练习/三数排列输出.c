#include <stdio.h>

int main(void){
	int a,b,c;
	int array[6]={1,2,3,4,5,6};//
	for(a=0;a<6;++a){
		for(b=0;b<6;++b){
			for(c=0;c<6;++c){
				if(array[a] != array[b] && array[b] != array[c] && array[c] != array[a]){
					if(array[a] != 0 && array[b] != 0 && array[c] != 0){
						printf("%d%d%d,",array[a],array[b],array[c]);
					}
				}
			}
		}
	}
	return 0;
}

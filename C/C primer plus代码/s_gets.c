#include <stdio.h>

char * s_gets(char *st,int n){
	char *rel_val;
	int i=0;
	rel_val=fgets(st,n,stdin);
	if(rel_val){
		while(st[i]!='\n' && st[i]!='\0'){
			i++;
		}
		if(st[i]=='\n'){
			st[i]='\0';
		}else{
			while(getchar()!='\n'){
				continue;
			} 
		}
	}
	return rel_val;
} 

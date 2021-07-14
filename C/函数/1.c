/*
	2021.02.06
	
	
*/

#include <stdio.h>

void Contrast(int,int);

int main(){
	/*
	int a=1,b=2,c=3,d=4,e=5,f=6;
	Contrast(a,b);
	Contrast(c,d);
	Contrast(e,f);
	*/
	int i;
	int a[9]={2,1,3,5,8,6,4,9};
	for(i=1;i<9;i++){
		printf("µÚ%d´Î£º\n",i);
		if(i<=8){
			Contrast(a[i-1],a[i]);
		}else{
			Contrast(a[i],a[i-1]);
		}
		
	}
	return 0;
} 

void Contrast(int a,int b){
	if(a>b){
		printf("%d\n",a);
	}else{
		printf("%d\n",b);
	}
}

/*
The Output:
----------------------


*/

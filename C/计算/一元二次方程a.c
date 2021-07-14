#include  <stdio.h>
#include <math.h>

int main(){
	double a,b,c;
	double x1,x2;
	double delta;
	do{
		scanf("%lf %lf %lf",&a,&b,&c);
		delta=b*b-4*a*c;
		//printf("%lf",delta);
		if(a>0){
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("x1=%lf,x2=%lf\n",x1,x2);
		}else if(a==0){
			x1=x2=-b/2*a;
			printf("%lf",x1);
		}else{
			printf("undefine"); 
		}
	}while(1);	
	return 0;
}

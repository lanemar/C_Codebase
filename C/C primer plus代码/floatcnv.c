/*
	2021.03.23
	��ƥ��ĸ�����ת�� 
*/
#include <stdio.h>

int main(void){
	float n1 =3.0;
	double n2 = 3.0;
	long n3 = 2000000000;
	long n4 = 1234567890;
	printf("%.1e,%.1e,%.1e,%.1e\n",n1,n2,n3,n4);
	printf("%ld,%ld\n",n3,n4);
	printf("%ld,%ld,%ld,%ld\n",n1,n2,n3,n4); 
	//printf("%zd",sizeof(long double));
	return 0;
}
/*
Running Result:
--------------------------------
3.0e+000,3.0e+000,9.9e-315,-1.$e+000
2000000000,1234567890
0,0,2000000000,1234567890
--------------------------------
*/

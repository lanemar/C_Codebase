#include <stdio.h>

int main(){
	printf("���������ߵ�Ӣ�ߺ�Ӣ�磺");
	float foot;
	float inch;
	scanf("%lf %lf",&foot,&inch);
	printf("�������Ϊ%f��",((foot + inch / 12) * 0.3048));
}

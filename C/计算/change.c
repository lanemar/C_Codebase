#include <stdio.h>

int main(){
	int price = 0;
	printf("������һ��100���ڵ����֣�");
	scanf("%d", &price);//"scanf()"stdin��׼���뺯��  
	int change = 100 - price;
	printf("\n���%d",change);
	return 0;
} 

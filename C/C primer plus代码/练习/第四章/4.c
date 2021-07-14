/*
	编写一个程序， 提示用户输入身高（ 单位： 英寸） 和姓名， 然后以下面的格式显示用户刚输入的信息：
	Dabney, you are 6.208 feet tall
	使用float类型， 并用/作为除号。 如果你愿意， 可以要求用户以厘米为单位输入身高， 并以米为单位显示出来。
*/
#include <stdio.h>
#define INC_CM 2.54
#define M_CM 100

int main(void){
	int tall;
	char name[10];
	float inc;
	float M;
	printf("请输入身高：");
	scanf("%d",&tall);
	printf("请输入姓名：");
	scanf("%s",name);
	inc=tall/INC_CM;
	M=(float)tall/M_CM;//这里需要进行强制类型转换。 
	printf("%s,you are %.2f feet tall",name,inc);
	//printf("%s,you are %.2f feet tall",name,M);
	return 0;
}

/*
	2021.03.25
	在scanf函数中，将'*'放在%和转换字符之间会跳过相应的输出项。 
*/
#include <stdio.h>

int main(void){
	int n;
	printf("Please enter three integers:\n");
	scanf("%*d %*d %d",&n);
	/*
		前两个%d因为中间加入了*号，所以在scanf函数读取的时候被跳过了。 
	*/
	printf("The last integers was %d\n",n);
	return 0;
} 
/*
Running Result:
--------------------------------
Please enter three integers:
1
2
3
The last integers was 3
--------------------------------
*/

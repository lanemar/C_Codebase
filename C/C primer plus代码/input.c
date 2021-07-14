/*
	2021.03.24
	scanf函数使用取地址符'&'用法 
*/
#include <stdio.h>

int main(void){
	
	int age;
	float assets;
	char pet[30];
	printf("Enter your age,assets,and favorite pet.\n");
	scanf("%d%f",&age,&assets);
	scanf("%s",pet);
	printf("%d $%.2f %s\n",age,assets,pet);
	return 0;
	
	/*
	char a;
	char b;
	scanf("%c",&a);
	scanf(" %c",&b);//如果在%c前面添加空格，scanf函数便会跳过空格，从下一个非空字符开始读取。 
	printf("%c,%c",a,b); 
	*/
}
/*
Running Result:
--------------------------------
Enter your age,assets,and favorite pet.
1
1.1
aaa
1 $1.10 aaa
--------------------------------
*/

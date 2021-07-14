/*
	编写一个程序， 先提示用户输入名， 然后提示用户输入姓。 
	在一行打印用户输入的名和姓， 下一行分别打印名和姓的字母数。 字母数要与相应名和姓的结尾对齐， 如下所示：
	Melissa Honeybee
	 7 		 8
	接下来， 再打印相同的信息， 但是字母个数与相应名和姓的开头对齐， 如下所示：
	Melissa Honeybee
	7 		8
*/
#include <stdio.h>
#include <string.h>

int main(void){
	char lastname[10];
	char newname[10];
	int lastsize,newsize;
	printf("请输入名字：");
	scanf("%s",newname);
	printf("请输入姓氏：");
	scanf("%s",lastname);
	lastsize=strlen(lastname);
	newsize=strlen(newname);
	printf("%s %s\n",newname,lastname);
	printf("%*d,%*d\n",newsize,newsize,lastsize,lastsize);
	printf("%s %s\n",newname,lastname);
	printf("%-*d,%-*d\n",newsize,newsize,lastsize,lastsize);
	return 0;
}
/*
Running Result:
--------------------------------
请输入名字：Melissa
请输入姓氏：Honeybee
Melissa Honeybee
      7,       8
Melissa Honeybee
7      ,8
--------------------------------
*/

/*
	2021.03.23
	不匹配的整型转换 
*/
#include <stdio.h>
#define PAGES 336
#define WORDS 65618

int main(void){
	short num = PAGES;
	short mnum = -PAGES;
	printf("num as short and unsigned short:\'%hd\',\'%hu\'\n",num,num);
	printf("-num as short and unsigned short:\"%hd\",\"%hu\"\n",mnum,mnum);
	//unsigned short输出mnum的值为：65200。
	//参考C primer plus:
	//short int的大小为2个字节，在无符号的情况下最大值为65536。
	//其中0~32768为有符号正整数集，32768~65535为有符号负数集。
	//其中65535表示-1,65534表示-2，并以此类推。
	//而mnum的值为-336，则表示为了65200（即65536-336）。
	//具体原理需要参考补码运算原理。 
	printf("num as int and char:%d,%c\n",num,num);
	//num的值(short int)使用%c输出，系统只会读取到后1个字节的内容。
	//short int占两个字节，而%c只读取一个字节中的内容。 
	//相当于%c只读取到了num值二进制下后第一个字节的内容。 
	printf("WORDS as int,short,and char:%d,%hd,%c\n",WORDS,WORDS,WORDS); 
	//WORDS的值已经超出了short int的值范围(0~65536)。
	//如果使用short int格式进行输出，系统只会取二进制下后两个字节进行输出。
	//参考第二条printf语句，如果WORDS的值在32768~65535直接，则会输出为负值。 
	return 0;
}
/*
Running Result:
--------------------------------
num as short and unsigned short:'336','336'
-num as short and unsigned short:"-336","65200"
num as int and char:336,P
WORDS as int,short,and char:65618,82,R
--------------------------------
*/

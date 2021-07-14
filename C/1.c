/*
	给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。
	回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。例如，121 是回文，而 123 不是。
	---------------------------------------------------------------------------------------------- 
	来源：力扣（LeetCode）
	链接：https://leetcode-cn.com/problems/palindrome-number
	著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

#include <stdio.h>
#include <stdbool.h>
#define FORMAT "%s! C is cool!\n"

bool isPalindrome(int x);

int main(void){
	/*
	int i;
	scanf("%d",&i);
	if(isPalindrome(i)){
		printf("ture");
	}else{
		printf("false");
	}
	*/
	printf(FORMAT,FORMAT);
	return 0;
} 

bool isPalindrome(int x){
	if(x < 0){
        return false;
    } 
    int res = x;
    unsigned int val = 0;//考虑到最大的数是2^31-1，普通的int类型长度肯定不够，long类型也可以。 
    while(res){
        val = val*10 + res%10;//每次执行前一次的val*10+当前res的余数。 
        res /= 10;//每循环一次res都要除10 
    }
    if(val==x){
        return true;
    }else{
    	return false;//这里一定要记得写false，不然当对比的结果为false时返回给主函数的值永远为空，（我淦！一个细节浪费两小时debug，有被恶心到。） 
	}
	//写法二：return val==x?true:false; 
	//如果val==x,对的话返回ture,否则返回false。 
}


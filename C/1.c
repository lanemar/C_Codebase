/*
	����һ������ x ����� x ��һ���������������� true �����򣬷��� false ��
	��������ָ���򣨴������ң��͵��򣨴������󣩶�����һ�������������磬121 �ǻ��ģ��� 123 ���ǡ�
	---------------------------------------------------------------------------------------------- 
	��Դ�����ۣ�LeetCode��
	���ӣ�https://leetcode-cn.com/problems/palindrome-number
	����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
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
    unsigned int val = 0;//���ǵ���������2^31-1����ͨ��int���ͳ��ȿ϶�������long����Ҳ���ԡ� 
    while(res){
        val = val*10 + res%10;//ÿ��ִ��ǰһ�ε�val*10+��ǰres�������� 
        res /= 10;//ÿѭ��һ��res��Ҫ��10 
    }
    if(val==x){
        return true;
    }else{
    	return false;//����һ��Ҫ�ǵ�дfalse����Ȼ���ԱȵĽ��Ϊfalseʱ���ظ���������ֵ��ԶΪ�գ������ƣ�һ��ϸ���˷���Сʱdebug���б����ĵ����� 
	}
	//д������return val==x?true:false; 
	//���val==x,�ԵĻ�����ture,���򷵻�false�� 
}


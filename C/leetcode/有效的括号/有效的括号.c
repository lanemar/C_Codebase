/*
	����һ��ֻ���� '('��')'��'{'��'}'��'['��']'?���ַ��� s ���ж��ַ����Ƿ���Ч��
	��Ч�ַ��������㣺
	�����ű�������ͬ���͵������űպϡ�
	�����ű�������ȷ��˳��պϡ�
	1 <= s.length <= 104
	ʾ����
	���룺s = "()"
	�����true

	��Դ�����ۣ�LeetCode��
	���ӣ�https://leetcode-cn.com/problems/valid-parentheses
	����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool isValid(char *);

int main(void){
	char s[6]="()[]{}";
	if(isValid(s)){
		printf("true");
	}else{
		printf("false"); 
	}
}


bool isValid(char * s){
    char temp[100001]={0};
    char * st=temp;//ʹ��ָ����Բ��ý�����temp���鶼���ؽ��ڴ��
    int i,stack=0;//stack=0����ջ�е�һ��Ԫ��
    int s_len=strlen(s);
    for(i=0;i<s_len;i++){
        //�ύ�����ʱ��ĳ��˵��ߵ�����...���ƣ��վ�����̫���ˡ�
        /*���Ϊ�����ž�ѹջ��*/
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            st[stack]=s[i];
            stack++;
            continue;
        }
        /*���ջ�����ڵ�һ��Ԫ���ϵ�ʱ�������ջֱ���ж�Ϊfalse��*/
        //�������ڵ�һ��Ԫ���д���stack=0��stack=0������������ѹջ��
        if(stack==0){
            return false;
        }else{
            //�ж���һ��ջԪ���Ƿ�Ϊ��Ӧ������
            if(s[i]==')'&&st[stack-1]!='(' || s[i]==']'&&st[stack-1]!='[' || s[i]=='}'&&st[stack-1]!='{' ){
                return false;
            }else{
                stack--;
            }
        }
    }
    return stack==0?true:false;//�ж��Ƿ�ջ��
} 

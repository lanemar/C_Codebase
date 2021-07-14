/*
	给定一个只包括 '('，')'，'{'，'}'，'['，']'?的字符串 s ，判断字符串是否有效。
	有效字符串需满足：
	左括号必须用相同类型的右括号闭合。
	左括号必须以正确的顺序闭合。
	1 <= s.length <= 104
	示例：
	输入：s = "()"
	输出：true

	来源：力扣（LeetCode）
	链接：https://leetcode-cn.com/problems/valid-parentheses
	著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
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
    char * st=temp;//使用指针可以不用将整个temp数组都加载进内存里。
    int i,stack=0;//stack=0代表栈中第一个元素
    int s_len=strlen(s);
    for(i=0;i<s_len;i++){
        //提交代码的时候蹦出了单边的括号...我淦，终究还是太菜了。
        /*如果为左括号就压栈。*/
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            st[stack]=s[i];
            stack++;
            continue;
        }
        /*如果栈还处在第一个元素上的时候就跳过栈直接判断为false。*/
        //右括号在第一个元素中代表stack=0，stack=0代表着跳过了压栈。
        if(stack==0){
            return false;
        }else{
            //判断上一个栈元素是否为对应的括号
            if(s[i]==')'&&st[stack-1]!='(' || s[i]==']'&&st[stack-1]!='[' || s[i]=='}'&&st[stack-1]!='{' ){
                return false;
            }else{
                stack--;
            }
        }
    }
    return stack==0?true:false;//判断是否栈空
} 

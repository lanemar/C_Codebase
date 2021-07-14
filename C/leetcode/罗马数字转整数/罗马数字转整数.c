/*
	罗马数字包含以下七种字符:I，V，X，L，C，D和M。

	字符          数值
	I             1
	V             5
	X             10
	L             50
	C             100
	D             500
	M             1000
	例如，罗马数字2写做II，即为两个并列的 1。12写做?XII，即为X+II。27写做XXVII,即为XX+V+II。 

	通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4 不写做IIII，而是IV。
	数字 1 在数字 5 的左边，所表示的数等于大数 5 减小数 1 得到的数值 4 。同样地，数字 9 表示为IX。这个特殊的规则只适用于以下六种情况：

	I可以放在V(5)和X(10)的左边，来表示4和 9。
	X可以放在L(50)和C(100)的左边，来表示40和90。
	C可以放在D(500)和M(1000)的左边，来表示400和900。
	给定一个罗马数字，将其转换成整数。输入确保在1到3999的范围内。
	
	示例： 
	输入:"III"
	输出: 3

	输入:"IV"
	输出: 4

	输入:"IX"
	输出: 9

	输入:"LVIII"
	输出: 58
	解释: L = 50, V= 5, III = 3.

	输入:"MCMXCIV"
	输出: 1994
	解释: M = 1000, CM = 900, XC = 90, IV = 4.

	来源：力扣（LeetCode）
	链接：https://leetcode-cn.com/problems/roman-to-integer
	著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

#include <stdio.h>
#include <string.h>
int romanToInt(char *);

int main(void){
	char input[15];
	printf("请输入：\n");
	scanf("%s",&input);
	printf("%d",romanToInt(input));
	return 0;
} 

int romanToInt(char * s){
    int sum=0;//总数 
    /*strlen(pointer):*/
    int i, len=strlen(s);//长度 
    for(i=0;i<len;i++){
        switch(s[i]){
            case 'I':
            		/*I可以放在V(5)和X(10)的左边，来表示4和 9。*/
                if(s[i+1]=='V'){
                	//如果V左边的字符是I的话则sum+4。 
                    sum=sum+4; 
                }else if(s[i+1]=='X'){
                	//如果X左边的字符为I的话则sum+9。 
                    sum=sum+9;
                }else{
                	//普通的+1 
                    sum=sum+1;
                }break;
            case 'V':
                if(i==0){
                	//V为开头时则直接sum+5 
                    sum=sum+5;
                }else if(i>0&&s[i-1]!='I'){
                	//如果上一个字符不是I也是直接加5 
                    sum=sum+5;
                }break;
            case 'X':
            	/*X可以放在L(50)和C(100)的左边，来表示40和90。*/
                if(s[i+1]=='L'){
                    sum=sum+40;
                }else if(s[i+1]=='C'){
                    sum=sum+90;
                }else if(i==0){
                	//如果X为开头：sum+10。 
                    sum=sum+10;
                }else if(i>0&&s[i-1]!='I'){
                	//X上一位字符不是I：sum+10。 
                    sum=sum+10;
                }break;
            case 'L':
                if(i==0){
                	//如果L开头：sum+50。 
                    sum=sum+50;
                }else if(i>0&&s[i-1]!='X'){
                	//如果上一位字符不为X：sum+50。 
                    sum=sum+50;
                }break;
            case 'C':
            	/*C可以放在D(500)和M(1000)的左边，来表示400和900。*/
                if(s[i+1]=='D'){
                    sum=sum+400;
                }else if(s[i+1]=='M'){
                    sum=sum+900;
                }else if(i==0){
                	//如果C为开头。 
                    sum=sum+100;
                }else if(i>0&&s[i-1]!='X'){
                	//如果上一个字符不为X。 
                    sum=sum+100;
                }break;
            case 'D':
                if(i==0){
                	//如果D为开头。 
                    sum=sum+500;
                }else if(i>0&&s[i-1]!='C'){
                	//如果上一个字符不为C。 
                    sum=sum+500;
                }break;
            case 'M':
                if(i==0){
                	//如果M为开头。 
                    sum=sum+1000;
                }else if(i>0&&s[i-1]!='C'){
                	//如果上一个字符不为C。 
                    sum=sum+1000;
                }break;
        }
    }
    return sum;
}

/*
	�������ְ������������ַ�:I��V��X��L��C��D��M��

	�ַ�          ��ֵ
	I             1
	V             5
	X             10
	L             50
	C             100
	D             500
	M             1000
	���磬��������2д��II����Ϊ�������е� 1��12д��?XII����ΪX+II��27д��XXVII,��ΪXX+V+II�� 

	ͨ������£�����������С�������ڴ�����ֵ��ұߡ���Ҳ�������������� 4 ��д��IIII������IV��
	���� 1 ������ 5 ����ߣ�����ʾ�������ڴ��� 5 ��С�� 1 �õ�����ֵ 4 ��ͬ���أ����� 9 ��ʾΪIX���������Ĺ���ֻ�������������������

	I���Է���V(5)��X(10)����ߣ�����ʾ4�� 9��
	X���Է���L(50)��C(100)����ߣ�����ʾ40��90��
	C���Է���D(500)��M(1000)����ߣ�����ʾ400��900��
	����һ���������֣�����ת��������������ȷ����1��3999�ķ�Χ�ڡ�
	
	ʾ���� 
	����:"III"
	���: 3

	����:"IV"
	���: 4

	����:"IX"
	���: 9

	����:"LVIII"
	���: 58
	����: L = 50, V= 5, III = 3.

	����:"MCMXCIV"
	���: 1994
	����: M = 1000, CM = 900, XC = 90, IV = 4.

	��Դ�����ۣ�LeetCode��
	���ӣ�https://leetcode-cn.com/problems/roman-to-integer
	����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
*/

#include <stdio.h>
#include <string.h>
int romanToInt(char *);

int main(void){
	char input[15];
	printf("�����룺\n");
	scanf("%s",&input);
	printf("%d",romanToInt(input));
	return 0;
} 

int romanToInt(char * s){
    int sum=0;//���� 
    /*strlen(pointer):*/
    int i, len=strlen(s);//���� 
    for(i=0;i<len;i++){
        switch(s[i]){
            case 'I':
            		/*I���Է���V(5)��X(10)����ߣ�����ʾ4�� 9��*/
                if(s[i+1]=='V'){
                	//���V��ߵ��ַ���I�Ļ���sum+4�� 
                    sum=sum+4; 
                }else if(s[i+1]=='X'){
                	//���X��ߵ��ַ�ΪI�Ļ���sum+9�� 
                    sum=sum+9;
                }else{
                	//��ͨ��+1 
                    sum=sum+1;
                }break;
            case 'V':
                if(i==0){
                	//VΪ��ͷʱ��ֱ��sum+5 
                    sum=sum+5;
                }else if(i>0&&s[i-1]!='I'){
                	//�����һ���ַ�����IҲ��ֱ�Ӽ�5 
                    sum=sum+5;
                }break;
            case 'X':
            	/*X���Է���L(50)��C(100)����ߣ�����ʾ40��90��*/
                if(s[i+1]=='L'){
                    sum=sum+40;
                }else if(s[i+1]=='C'){
                    sum=sum+90;
                }else if(i==0){
                	//���XΪ��ͷ��sum+10�� 
                    sum=sum+10;
                }else if(i>0&&s[i-1]!='I'){
                	//X��һλ�ַ�����I��sum+10�� 
                    sum=sum+10;
                }break;
            case 'L':
                if(i==0){
                	//���L��ͷ��sum+50�� 
                    sum=sum+50;
                }else if(i>0&&s[i-1]!='X'){
                	//�����һλ�ַ���ΪX��sum+50�� 
                    sum=sum+50;
                }break;
            case 'C':
            	/*C���Է���D(500)��M(1000)����ߣ�����ʾ400��900��*/
                if(s[i+1]=='D'){
                    sum=sum+400;
                }else if(s[i+1]=='M'){
                    sum=sum+900;
                }else if(i==0){
                	//���CΪ��ͷ�� 
                    sum=sum+100;
                }else if(i>0&&s[i-1]!='X'){
                	//�����һ���ַ���ΪX�� 
                    sum=sum+100;
                }break;
            case 'D':
                if(i==0){
                	//���DΪ��ͷ�� 
                    sum=sum+500;
                }else if(i>0&&s[i-1]!='C'){
                	//�����һ���ַ���ΪC�� 
                    sum=sum+500;
                }break;
            case 'M':
                if(i==0){
                	//���MΪ��ͷ�� 
                    sum=sum+1000;
                }else if(i>0&&s[i-1]!='C'){
                	//�����һ���ַ���ΪC�� 
                    sum=sum+1000;
                }break;
        }
    }
    return sum;
}

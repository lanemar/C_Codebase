/*
	enum��structһ�����Ƕ���һ���������ͣ����岻ռ���ڴ棬ֻ����ʹ��������ʹ�������ʱϵͳ�Ż�����ڴ档 
	enum�ǽ�һ���������������п��ܵ������оٳ��������޶���enum���͵ı���ֻ��������Щֵ�� 
*/

#include <stdio.h>

enum week{
	Mon,Tue,Wed,Thu,Fir,Sat,Sun
};

//[Error] expected identifier before numeric constant
//ö�ٳ�ԱҲ�Ǳ�������������ֱ��ʹ�����ֿ�ͷ��
/* 
enum dayhours{
	1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24
}; 
*/
struct day{
	enum week day_today;
	//enum dayhours day_hours;
};
int main(){
	enum week today;
	int i;
	enum week * PTR = &today; 
	printf("%d\n",sizeof(today));
	printf("%p\n",&today);
	printf("%p\n",PTR);
	/*
	for(i=0;i<7;i++){
		switch(today=i){
			case 0:
				printf("Mon\n");
				break;
			case 1:
				printf("Tue\n");
				break;
			case 2:
				printf("Wed\n");
				break; 
			case 3:
				printf("Thu\n");
				break;
			case 4:
				printf("Fir\n");
				break;
			case 5:
				printf("Sat\n");
				break; 	
			case 6:
				printf("Sun\n");
				break;
		}
	}
	*/
	return 0;
}

/*
	2021.01.25
	对break和continue语句进行学习。
	break语句会直接跳出循环。
	contiune是跳出当前循环并立即进行下一次循环。 
	break语句不能直接作用于if语句。 
	 
	 getchar()函数：获取用户输入的字符。 
*/
#include <stdio.h>

int main(){
	/*
	int i;
	for(i=0;i<10;i++){
		int a=i;
		break;
		//将直接出循环并继续指向接下来的语句。 
		//continue;
		//将跳过下面的语句并执行循环，相当于跳出当前的循环并执行下一次循环。 
		printf("a=%d",a);//跳过 
	} 
	printf("i=%d",i);
	*/
	
	/*
	int i;
	for(i=0;i<10;i++){
		if(i<9){
			continue;
		}else{
			printf("9");
		}
	}
	*/
	int i=0,s=0;
	do{
		if(i%2){
			i++;
			continue;
		}
		i++;
		s+=i;
	}while(i<7);
	printf("%d\n",s);
	return 0;
}

/*
结果：
----------------------------
break:
i=0
continue：
i=10
----------------------------	
*/

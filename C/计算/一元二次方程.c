#include <stdio.h> 
#include <math.h>

int main(void){
	int a,b,c;
	/* 回调 */
	loop: printf("请输入a的值：\n");
	scanf("%d",&a);
	if(a==0){
		printf("a不能为0");
	}else{
			/* 如果a的值不为0则继续输入b */
			printf("请输入b的值：\n");
			scanf("%d",&b);
		if(b==0){
			printf("b不能为0");
		}else{
			/* 如果b的值不为0则继续输入c */
			printf("请输入c的值：\n");
			scanf("%d",&c);
			if(c==0){
				printf("c不能为0");
			}else{
				/* 如果c的值不为0则开始进行计算 */
				float x=b*b-4*a*c;
				float d1,d2;
				/* 判断delta的计算值 */
				if(x>0){
					d1=(-b+sqrt(x))/(2*a); //+
					d2=(-b-sqrt(x))/(2*a); //-
					printf("计算得到两个值：%f,%f\n",d1,d2);
					printf("------------------------------------------------------\n");
				}else if(x==0){
					d1=(-b)/(2*a); //-
					printf("计算得到一个值%f\n",d1);
					printf("------------------------------------------------------\n");
				}else{
					printf("无解\n");
					printf("------------------------------------------------------\n");
				}
			}
		}
	}
	printf("是否继续计算，继续则输入1，退出则输入0。\n");
	int y;
	scanf("%d",&y);
	printf("------------------------------------------------------\n");
	if(y==1){
		goto loop;/*调用loop节点*/
	}else{
		return 0;
	}
}

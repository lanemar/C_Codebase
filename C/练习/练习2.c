#include <stdio.h>
int main(void)
{
	int base =100000; //基数
	int profit; //手动输入参数
	loop1: printf("请输入： ");
	scanf("%d",&profit);
	float bonus;
	
	float bonus1,bonus2,bonus4,bonus6,bonus10;
	bonus1=100000*0.1;
    bonus2=bonus1+base*0.075;//10w的提成加上大于10w部分的提成，不超过20w。 10000+100000*0.075 =17500 
    bonus4=bonus2+2*base*0.05;//
    bonus6=bonus4+2*base*0.03;
    bonus10=bonus6+4*base*0.015;
	/*在计算对应数额的提成时，需要把具体数额之前的提成计算出来，在加上固定数额之后的提成。*/
	
	if(profit<=base){
		bonus=profit*0.1; //10w
	}else if(profit<2*base){
		//bouns=(base*0.1)+((profit-base)*0.075); //<20w
		bonus=bonus1+((profit-base)*0.075);//利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
	}else if(profit<4*base){
		//bonus=((base*0.1)+((profit-base)*0.075))+((profit-2*base)*0.05); //<40w
		bonus=bonus2+((profit-2*base)*0.05); //<40w
	}else if(profit<6*base){
		bonus=(((base*0.1)+((profit-base)*0.075))+((profit-2*base)*0.05))+((profit-4*base)*0.03); //<60w
		bonus=bonus4+((profit-4*base)*0.03); //<60w
	}else if(profit<10*base){
		bonus=((((base*0.1)+((profit-base)*0.075))+((profit-2*base)*0.05))+((profit-4*base)*0.03))+((profit-6*base)*0.015); //<100w
		bonus=bonus6+((profit-6*base)*0.015); //<100w
	}else if(profit>10*base){
		//bonus=(((((base*0.1)+((profit-base)*0.075))+((profit-2*base)*0.05))+((profit-4*base)*0.03))+((profit-6*base)*0.015))+((profit-10*base)*0.001); //>100w
		bonus=bonus10+((profit-10*base)*0.001); //>100w
	}
	printf("%f\n",bonus);
	printf("y/n\n");
	char choose;
	getchar();
	scanf("%c",&choose);
	if(choose=='y'){
		goto loop1;
	}else{
		return 0;
	}
}
	/*
	题目：企业发放的奖金根据利润提成。
	利润(I)低于或等于10万元时，奖金可提10%； 
	利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
	20万到40万之间时，高于20万元的部分，可提成5%；
	40万到60万之间时高于40万元的部分，可提成3%；
	60万到100万之间时，高于60万元的部分，可提成1.5%;
	高于100万元时，超过100万元的部分按1%提成，
	从键盘输入当月利润I，求应发放奖金总数？
	*/


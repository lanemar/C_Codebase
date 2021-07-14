#include <stdio.h>

int main(void){
	int zippo[4][2] = { { 2, 4 }, { 6, 8 }, { 1, 3 }, { 5, 7 } };
	int (*pz)[2];
	pz=zippo;
	printf("pz = %#x , pz+1 = %#x\n",pz,pz+1);
	printf("pz[0] = %#x , pz[0]+1 = %#x\n",pz[0],pz[0]+1);
	printf("*pz = %#x , *pz+1 = %#x\n",*pz,*pz+1);
	printf("pz[0][0]=%d\n",pz[0][0]);
	printf("*pz = %d\n",*pz[0]);
	printf("**pz = %d\n",**pz);
	printf("pz[2][1] = %d\n",pz[2][1]);
	printf("*(*(pz+2)+1) = %d\n",*(*(pz+2)+1));
	return 0;
} 
/*
Running Result:
----------------------------------------
pz = 0x62fdf0 , pz+1 = 0x62fdf8
pz[0] = 0x62fdf0 , pz[0]+1 = 0x62fdf4
*pz = 0x62fdf0 , *pz+1 = 0x62fdf4
pz[0][0]=2
*pz = 2
**pz = 2
pz[2][1] = 3
*(*(pz+2)+1) = 3
----------------------------------------
*/

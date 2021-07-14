#include <stdio.h>
#define COLS 4

int sum(const int [],int);
int sum2d(const int [][COLS],int);

int main(void){
	int tot1,tot2,tot3;
	int *pt1;
	int (*pt2)[COLS];
	pt1=(int[2]){10,20};
	pt2=(int[2][COLS]){ {1, 2, 3, -9}, { 4, 5, 6, -8 } };
	tot1=sum(pt1,2);
	tot2=sum2d(pt2,2);
	tot3=sum((int[]){4, 4, 4, 5, 5, 5},6);
	printf("tot1 = %d\n",tot1);
	printf("tot2 = %d\n",tot2);
	printf("tot3 = %d\n",tot3);
	return 0;
}

int sum(const int ar[],int n){
	int i;
	int total=0;
	for(i=0;i<n;i++){
		total+=ar[i];
	}
	return total;
}

int sum2d(const int ar[][COLS],int rows){
	int r,c,total=0;
	for(r=0;r<rows;r++){
		for(c=0;c<COLS;c++){
			total+=ar[r][c];
		}
	}
	return total;
}



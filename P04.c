#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i, j, tmp;
	int k=0;	//用來控制比較次數(j) 
	int a[5]={26,5,81,7,63};
	for(i=0; i<4; i++){
		for(j=0; j<sizeof(a) / sizeof(a[0])-1-k; j++){
			if(a[j]>a[j+1]){
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
		k++;
		printf("Loop %d	: ", i);
		for(j=0; j<5; j++)
			printf("%4d", a[j]);
		printf("\n");
	}	
	system("pause");
	return 0;
} 


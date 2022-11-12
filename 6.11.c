#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i, j, tmp;
	int a[5]={26,5,81,7,63};
	for(i=0; i<4; i++){
		for(j=0; j<sizeof(a)/sizeof(a[0]) - 1 - i; j++){
			if(a[j]>a[j+1]){
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
		printf("Loop %d	: ", i);
		for(j=0; j<5; j++)
			printf("%4d", a[j]);
		printf("\n");
	}	
	system("pause");
	return 0;
} 


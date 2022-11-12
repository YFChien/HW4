#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i, j, tmp;
	int count=0;
	printf("輸入有幾個數字:");
	scanf("%d", &count);
	int a[count-1];				//creat empty array;
	for(i=0; i<count; i++){		//key in array	
		printf("輸入第%d個數:", i+1);
		scanf("%d", &a[i]); 
	}
	for(i=0; i<count; i++){		//compare & swap many round
		for(j=0; j<sizeof(a)/sizeof(a[0])-i; j++){
			if(a[j]>a[j+1]){
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
		printf("Loop %d	: ", i);
		for(j=0; j<count; j++)
			printf("%4d", a[j]);
		printf("\n");
	}	
	system("pause");
	return 0;
} 


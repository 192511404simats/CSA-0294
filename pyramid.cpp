#include<stdio.h>
int main(){
	int row,i,j,s;
	printf("enter no of rows: ");
	scanf("%d",&row);
	for(i=1;i<=row;i++){
		for(s=1;s<=row-i;s++){
			printf(" ");
		}
		for(j=i;j>=1;j--){
			printf("%d",j);
		}
		printf("\n");
	}
}

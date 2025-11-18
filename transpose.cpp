#include<stdio.h>
int main(){
	int r,c,i,j;
	printf("enter number of rows:");
	scanf("%d",&r);
	printf("enter number of columns:");
	scanf("%d",&c);
	int a[r][c],t[c][r];
	printf("Enter matrix elements:\n");

	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("given matrix \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			t[j][i]=a[i][j];
		}
	}
	printf("transpose matrix \n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			printf(" %d ",t[i][j]);
		}
		printf("\n");
	}
}

#include<stdio.h>
int main(){
	int n,i,j;
	char c;
	printf("enter no of rows:");
	scanf("%d",&n);
	printf("enter symbol:");
	scanf(" %c",&c);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
		
			printf("%c",c);
		}
		printf("\n");
	}
	return 0;
}

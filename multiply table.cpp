# include<stdio.h>
int main(){
	int n,i,j;
	printf("enter multiplication table:");
	scanf("%d",&n);
	printf("enter multiplication table:");
	scanf("%d",&j);
	for (i=1;i<=j;i++){
		printf("%d x %d = %d \n",n,i,n*i);
		
	}
	return 0;
}

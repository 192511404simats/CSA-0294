# include<stdio.h>
int main(){
	int n,j,i;
	printf("enter a number:");
	scanf("%d",&n);
	j=1;
	for(i=1;i<=n;i++){
		j*=i;
	}
	printf("the factorial of %d is %d",n,j);
}

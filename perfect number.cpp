# include<stdio.h>
int main(){
	int n,j,i;
	printf("enter a number:");
	scanf("%d",&n);
	j=0;
	for(i=1;i<=(n/2)+1;i++){
		if(n%i==0){
			j+=i;
		}
	}
	if (j==n){
	printf("%d is pefect number",n);
	}else{
		printf("%d is not a perfect number ",n);
	}
}

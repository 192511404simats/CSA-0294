#include<stdio.h>
#include<math.h>
int main(){
	int j,n,i,flag;
	flag=0;
	printf("enter a number:");
	scanf("%d",&n);
	j=pow(n,0.5);
	for(i=2;i<=j;i++){
		if (n%i==0){
			flag=1;
		}
	}
	if(flag==1){
		printf("%d is composite",n);
		
	}else{
		printf("%d is prime",n);
	}
	return 0;
}

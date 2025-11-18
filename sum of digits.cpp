#include<stdio.h>
int main(){
	int sum=0,i,temp,n;
	scanf("%d",&n);
	temp=n;
	while(temp!=0){
		i=temp%10;
		sum+=i;
		temp/=10;
	}
	printf("%d",sum);
}

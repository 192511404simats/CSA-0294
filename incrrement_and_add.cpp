#include<stdio.h>
int main(){
	int sum=0,i,temp,n,count=0;
	scanf("%d",&n);
	temp=n;
	while(temp!=0){
		i=temp%10;
		sum+=i;
		temp/=10;
		count++;
	}
	printf("%d",sum+count);
}

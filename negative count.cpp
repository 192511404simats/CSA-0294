#include<stdio.h>
int main(){
	int arr[100],i,n,e,count=0;
	printf("enter number of elements:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		printf("enter elememt one by one:");
		scanf("%d",&e);
		arr[i]=e;
	}
	for(i=0;i<=n-1;i++){
		if(arr[i]<0){
			count++;
		}
	}
	printf("the count of negative numbers are %d",count);
}

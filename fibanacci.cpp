#include<stdio.h>
int main(){
	int n,j,i;
	scanf("%d",&n);
	int arr[n+2];
	arr[0]=0;
	arr[1]=1;
	for(i=0;i<=n;i++){
		j=arr[i]+arr[i+1];
		arr[i+2]=j;
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

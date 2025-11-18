#include<stdio.h>
int main(){
	int e,j,i,n;
	printf("enter how many elements? ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter elements one by one");
		scanf("%d",&e);
		arr[i]=e;
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

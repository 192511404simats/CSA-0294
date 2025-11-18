#include <stdio.h>
int main(){
	int i,n,e;
	printf("enter a number of elements: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter elements one by one");
		scanf("%d",&arr[e]);
	}
	for(i=0;i<n;i++){
		if(arr[i]==arr[i+1]){
			printf("%d",arr[i]);
			i++;
		}
	}
}

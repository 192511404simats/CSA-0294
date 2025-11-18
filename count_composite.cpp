#include<stdio.h>
#include<math.h>
int main(){
	int arr[100],i,n,e,count=0,j,k;
	printf("enter number of elements:");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		printf("enter elememt one by one:");
		scanf("%d",&e);
		arr[i]=e;
	}
	for(i=0;i<=n-1;i++){
		k=pow(arr[i],0.5);
		for(j=2;j<=k;j++){
			if(arr[i]%j==0){
				count++;
			}
		}
	
	}
	printf(" the number of composite numbers are %d",count);
}

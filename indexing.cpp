#include<stdio.h>
int main(){
	int n;
	printf("enter number of elements: ");
	scanf("%d",&n);
	int index,arr[n],e,i,t;
	printf("enter element to be searched");
	scanf("%d",&t);
	for(i=0;i<n;i++){
		printf("enter element one by one");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		if(arr[i]==t){
			index=i;
		}
	}
	printf("%d",index);
}

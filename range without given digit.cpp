#include<stdio.h>
int main(){
	int p,q,r,i;
	printf("enter starting and ending with space sepearted");
	scanf("%d %d",&p,&q);
	printf("enter which digit should not be displayed: ");
	scanf("%d",&r);
	for(i=p;i<=q;i++){
		int flag=0;
		int temp=i;
		while (temp>0){
			if(temp%10==r){
				flag=1;
				break;
			}
			temp/=10;
		}
		if(flag==0){
			
			printf("%d , ",i);
			continue;
		}
		}
	return 0;
}

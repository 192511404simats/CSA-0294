#include<stdio.h>
int main(){
	int p,n;
	float r;
	printf("principal interest? no of years? rate of interest?");
	scanf("%d %d %f",&p,&n,&r);
	printf("simple interest is %.2f",(p*n*r)/100);
	return 0;
}

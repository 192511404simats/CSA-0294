#include<stdio.h>
int main(){
	int a,b,*p,*q;
	printf("enter 1st number");
	scanf("%d",&a);
	printf("enter 2nd number");
	scanf("%d",&b);
	p=&a;
	q=&b;
	printf("%d", *p + *q);
}

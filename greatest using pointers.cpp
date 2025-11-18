#include<stdio.h>
int main(){
	int a,b,*p,*q;
	p=&a;
	q=&b;
	printf("1st number: ");
	scanf("%d",p);
	printf("2nd number: ");
	scanf("%d",q);
	if(*p>*q){
		printf("%d is greater ",*p);
	}else if (*p<*q){
		printf("%d is greater ",*q);

	}
}

#include<stdio.h>
int main(){
	int a,b;
	char i;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	printf("enter operation[+,-,*,/]:");
	scanf(" %c", &i);
	switch(i)
	{
		case '+':
			printf("sum of two number is : %d ",a+b);
			break;
		case '-':
			printf("difference of two number is : %d ",a-b);
			break;
		case '*':
			printf("product of two number is : %d ",a*b);
			break;
		case '/':
			printf("sum of two number is : %d ",a/b);
			break;
	    default:
	    	printf("Invalid");
	    	break;
	}
}

#include<stdio.h>
int main(){
	int age;
	printf("enter your age");
	scanf("%d",&age);
	if(age<18){
		printf("not eligible to vote");
	}else{
		printf("eligible to vote");
	}
}

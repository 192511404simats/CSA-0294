# include<stdio.h>
int main(){
	int a,b,c;
	printf("enter 3 numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a*a==b*b+c*c ||
	b*b==a*a+c*c||
	c*c==a*a+b*b){
		printf("%d %d %d is ttriplet",a,b,c);
	}else{
		printf("%d %d %d is not ttriplet",a,b,c);
	}
}

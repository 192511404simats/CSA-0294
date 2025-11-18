# include<stdio.h>
int main(){
	int x,y,a,b,t;
	 
	printf("enter 1st number:");
	scanf("%d",&x);
	printf("enter 2nd number:");
	scanf("%d",&y);
	a=x;
	b=y;
	while (y!=0){
		t=y;
		y=x%y;
		x=t;
	}
	printf("gcd is %d \n",x);
	printf("lcm is %d",a*b/x);
}
	

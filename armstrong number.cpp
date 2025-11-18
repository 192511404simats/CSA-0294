# include<stdio.h>
# include<math.h>
int main(){
	int num,temp,digit=0,rem,sum=0;
	printf("enter a number : ");
	scanf("%d",&num);
	temp=num;
	while (temp!=0){
		temp/=10;
		digit++;
	}
	temp=num;
	while (temp!=0){
		rem=temp%10;
		sum+=pow(rem,digit);
		temp/=10;
	}
	if (sum==num){
		printf("yes %d is a armstrong number",num);
		
	}else{
		printf("No %d is not a armstrong number",num);
	}
}

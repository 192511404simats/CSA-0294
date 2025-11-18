#include<stdio.h>
#include<math.h>
int main(){
	int a,b,j,i,k,prime,c_c=0,c_p=0;
	scanf("%d",&a);
	scanf("%d",&b);
	for(i=a;i<=b;i++){
		j=pow(i,0.5);
		int composite=0;
		if(i<2){
			printf("%d is neither prime nor composite \n",i);
			continue;
		}else{
			for (k=2;k<=j;k++){
			if(i%k==0){
				composite=1;
				break;
			}
		}
		}
		
		if(composite==1){
			printf(" %d is composite \n",i);
			c_c++;
		}else{
			printf(" %d is prime \n",i);
			c_p++;
		}
	}
	printf("count of prime are %d",c_p);
	printf("count of composite are %d",c_c);	
}

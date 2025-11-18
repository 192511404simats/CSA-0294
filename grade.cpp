# include<stdio.h>
int main(){
	float mark;
	printf("enter your mark");
	scanf("%d",&mark);
	if (mark>85 && mark<=100){
		printf("S grade");
	
	}else if (mark>65 && mark<=80){
		printf("A grade");
	}else if (mark>50 && mark<=65){
		printf("B grade");
	}else{
		printf("Fail");
	}
	return 0;
}

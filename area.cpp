#include <stdio.h>
#include <stdbool.h>>
int main(){
	while(true){
		int ch,l,b,r,s,h;
	printf("1.circle,2.rectangle,3.square,4.traingle,5.exit \n");
	printf("enter your choice: ");
	scanf("%d", &ch);
	if (ch==1){
		printf("radius?");
		scanf("%d",&r);
		printf("area of circle is %f ",3.14 * r * r);
	
	}else if(ch==2){
		printf("length and breadth of rectangle");
		scanf("%d%d",&l,&b);
		printf("area of rectangle is %d and perimeter of rectangle is %d",l*b,2*(l+b));
	}else if(ch==3){
		printf("enter side");
		scanf("%d",&s);
		printf("area of square is %d and perimeter is %d",s*s,4*s);
		
	}else if(ch==4){
		printf("breadth and height?");
		scanf("%d %d",&b,&h);
		printf("area of ttriangle is: %f ",0.5*b*h);
	}else if(ch==5){
		break;
	}
	
	
	
	}
	return 0;
}

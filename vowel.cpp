#include <stdio.h>
int main(){
	char a;
	printf("enter a character");
	scanf("%c",&a);
	if(a=='A'||a=='a'||a=='e'||a=='E'||a=='i'||a=='I'||a=='o'||a=='O'||a=='u'||a=='U'){
		printf("yes it is vowel");
		
	}else{
		printf("no it is not vowel");
		
	}
	return 0;
}

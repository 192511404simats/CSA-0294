#include<stdio.h>
int main(){
	int i,v=0,c=0;
	char str[100];
	printf("enter sentence:");
	scanf("%[^\n]",str);
	for(i=0;str[i]!='\0';i++){
		char ch=str[i];
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
            v++;
			}else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            c++;
			}
		}
	printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);

    return 0;
	}

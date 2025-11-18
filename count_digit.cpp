#include <stdio.h>

int main() {
    int num, reversed = 0, digit,count=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10; 
        reversed = reversed * 10 + digit;
        num = num / 10;
        count+=1;
    }

    printf("number of digits are:%d", count);

    return 0;
}


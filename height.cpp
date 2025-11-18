#include <stdio.h>

int main() {
    char gender;
    float height;

    printf("Enter gender (M/F): ");
    scanf("%c", &gender);

    printf("Enter height in cm: ");
    scanf("%f", &height);

    if(gender == 'M' || gender == 'm') {
        if(height < 165)
            printf("Classification: Dwarf (Short Male)");
        else if(height <= 180)
            printf("Classification: Average Male");
        else
            printf("Classification: Tall Male");
    }

    else if(gender == 'F' || gender == 'f') {
        if(height < 152)
            printf("Classification: Dwarf (Short Female)");
        else if(height <= 168)
            printf("Classification: Average Female");
        else
            printf("Classification: Tall Female");
    }

    else {
        printf("Invalid gender input!");
    }

    return 0;
}


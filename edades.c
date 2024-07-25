#include <stdio.h>

int main() {
    int age;
    
    printf("edad?");
    scanf("%d", &age);
    
    if (age < 18) {
        printf("menor de edad");
    } else if (age <= 64) {
        printf("adulto");
    } else {
        printf("fosil");
    }
    
    return 0;
}

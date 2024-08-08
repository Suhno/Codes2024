#include <stdio.h>

int main() {
    int number;
    do {
        printf("number between 1 and 10: ");
        scanf("%d", &number);
    } while (number < 1 || number > 10);
    printf("Valid number: %d\n", number);
    return 0;
}

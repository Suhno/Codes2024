#include <stdio.h>

int main() {
    int num;

    printf("Numero?");
    scanf("%d", &num);

    if (num > 0) {
        printf("positivo.");
    } else if (num < 0) {
        printf("negativo.");
    } else {
        printf("cero");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int num[] = {1, 2, 3, 4, 5};
    int sum = 0;
    int length = sizeof(num) / sizeof(num[0]);
    
    for (int i = 0; i < length; i++) {
        sum += num[i];
    }
    
    printf("Sum: %d\n", sum);
    return 0;
}

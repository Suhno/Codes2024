#include <stdio.h>

int main() {
    int mat1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int mat2[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int result[2][2] = {0}; // Initialize result matrix with zeroes

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 3; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Print the result
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

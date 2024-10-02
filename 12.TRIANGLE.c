#include <stdio.h>

void printMagicTriangle(int n) {
    int triangle[n][n];
    int i, j;

    // Initialize the first row
    triangle[0][0] = 1;

    // Generate the magic triangle
    for (i = 1; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            }
        }
    }

    // Print the magic triangle
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the size of the magic triangle: ");
    scanf("%d", &n);
    printMagicTriangle(n);
    return 0;
}
// Your code here...
#include<stdio.h>

int main() {
    int i, j, N;

    scanf("%d", &N); // Input the number of rows for the triangle

    for (i = 1; i <= N; i++) {
        // Print spaces to align the triangle in an acute shape
        for (j = 1; j <= N - i; j++) {
            printf("  "); // Print two spaces for better alignment
        }

        // Print the increasing numbers
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Print the decreasing numbers
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n"); // Move to the next row
    }

    return 0;
}

// Your code here...
#include<stdio.h>

int main() {
    int i, j, N, num;
    scanf("%d", &N); // Input the number of rows for the triangle

    for (i = 1; i <= N; i++) {
        num = i % 2; // Determine the starting number: 0 if i is even, 1 if i is odd
        for (j = 1; j <= i; j++) {
            printf("%d ", num); 
            num = 1 - num; // Toggle between 0 and 1
        }
        printf("\n");
    }

    return 0;
}

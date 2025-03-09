// Your code here...
#include<stdio.h>

int main() {
    int i, j, N;
    char ch;
    scanf("%d", &N);

    for (i = N; i >= 1; i--) {
        ch = 'A'; // Always start with 'A' for each row
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++; // Increment to the next character
        }
        printf("\n");
    }

    return 0;
}

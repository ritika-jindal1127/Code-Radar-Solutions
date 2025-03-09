// Your code here...
#include<stdio.h>
int main()
{
    int i, j, k, N, num;
    scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        // Print spaces for alignment
        for (j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Print numbers
        num = 1;
        for (k = 1; k <= i; k++) {
            printf("%d", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}

// Your code here...
#include<stdio.h>
int main()
{
    int i, j, N;
    char ch;
    scanf("%d", &N);
    for (i = N; i >= 1; i--)
    {
        ch = 'A' + i - 1;
        for (j = 1; j <= i; j++)
        {
            printf("%c ", ch);
            ch--;
        }
        printf("\n");
    }
    return 0;
}

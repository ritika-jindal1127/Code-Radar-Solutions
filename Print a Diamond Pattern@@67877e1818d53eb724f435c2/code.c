#include<stdio.h>
int main()
{
    int N,i,j,sp;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(sp=1;sp<=N-i;sp++)
        {
           printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=N-1;i>=1;i--)//for reverse half pyramid code will same just first line change
    {
        for(sp=1;sp<=N-i;sp++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");
            }
    return 0;
}
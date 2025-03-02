// Your code here...
#include<stdio.h>
int main()
{
    int i,j,N;
    scanf("%d",&N);
    for(i=1;i<=N+1;i++)
    {
        for(j=1;j<=N+1;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
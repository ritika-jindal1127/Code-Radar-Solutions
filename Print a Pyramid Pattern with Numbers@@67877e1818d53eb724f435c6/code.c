// Your code here...
#include<stdio.h>
int main()
{
    int N,i,j,sp;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(sp=1;sp<=2-i;sp++)
        {
            printf(" ");
        }
        for(j=1;j<=N;j++)
        {
            printf("%d",N);
        }
        printf("\n");
    }
    return 0;
}
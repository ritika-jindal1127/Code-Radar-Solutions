// Your code here...
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
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
//if n=5
//i=1 sp=4 j=1
//i=2 sp=3 j=2
//i=3 sp=2 j=3
//i=4 sp=1 j=4
//i=5 sp=0 j=5
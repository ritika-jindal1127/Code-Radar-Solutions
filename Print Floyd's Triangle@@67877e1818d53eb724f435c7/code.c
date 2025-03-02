// Your code here...
#include<stdio.h>
int main()
{
    int i,j,N,num=1;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j=1;j<=N+1;j++){
            printf("%d ",num);
        }
        printf("\n");
    }
}
/*i=1 j=1
i=2 j=2*/
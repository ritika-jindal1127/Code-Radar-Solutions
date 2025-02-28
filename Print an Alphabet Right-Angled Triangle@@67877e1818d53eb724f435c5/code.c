// Your code here...
#include<stdio.h>
int main()
{
    int i,N;
    char j;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        for(j='A';j<'A'+i;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}
// Your code here...n
#include<stdio.h>
int main()
{
    int i,N,sp;
    char j;
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
        /*for(sp=0;sp<=N-i;sp++){
            printf(" ");
        }*/
        char j=0;
        for(j='A';j<='A'+i;j++){
            printf("%c ",j);
            j++
        }
        printf("\n");
    }
    return 0;
}
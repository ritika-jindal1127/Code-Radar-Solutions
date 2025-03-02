// Your code here...n
#include<stdio.h>
int main()
{
    int i,N;
    char j;
    for(i=0;i<=N;i++)
    {
        for(sp=0;sp<=N-i;sp++){
            printf(" ");
        }
        for(j='A';j<='A'+i;j++){
            printf("\n");
        }
    }
    return 0;
}
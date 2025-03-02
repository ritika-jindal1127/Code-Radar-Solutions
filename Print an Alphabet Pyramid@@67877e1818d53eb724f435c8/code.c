// Your code here...n
#include<stdio.h>
int main()
{
    int i,N;
    char j;
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
        /*for(sp=0;sp<=N-i;sp++){
            printf(" ");
        }*/
        j='A';
        for(j=1;j<=i;j++){
            printf("%c ",j);
            j++;
        }
        printf("\n");
    }
    return 0;
}
// Your code here...n
#include<stdio.h>
int main()
{
    int i,N,j;
    char ch;
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
        /*for(sp=0;sp<=N-i;sp++){
            printf(" ");
        }*/
        ch='A';
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch);
            ch++;
        }
        //printf("\n");
    }
    return 0;
}
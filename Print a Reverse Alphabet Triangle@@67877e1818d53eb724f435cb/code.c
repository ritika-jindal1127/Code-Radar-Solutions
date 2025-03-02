// Your code here...
#include<stdio.h>
int main()
{
    int i,j,N;
    char ch;
    scanf("%d",&N);
    for(i=N;i>=N;i--)
    {
        ch='A';
        for(j=1;j<=N;j++){
            printf("%c ",j);
            ch--;
        }
        printf("\n");
    }
}
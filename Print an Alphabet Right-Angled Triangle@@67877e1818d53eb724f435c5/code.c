// Your code here...
#include<stdio.h>
int main()
{
    int i,N,j;
    char ch;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        /*for(j='A';j<'A'+i;j++)
        {
            printf("%c ",j);
        }*/
        ch='A';
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
//i=1 j=1 j=A
//i=2 j=1 2 j=A B
//i=3 j=1 2 3  J= A B C
//i=4 j=1 2 3 4 J= A B C D
//FOR(i=1;)
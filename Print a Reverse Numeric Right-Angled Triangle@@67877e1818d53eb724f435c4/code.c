// Your code here...
#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    for(i=N;i>=1;i--)
    { int a=1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",a++);
        }
        printf("\n");
    }
    return 0;
}
//i=4 j=1 2 3 4 
//i=3 j=1 2 3 
//i=2 j=1 2 
//i=1 j=1
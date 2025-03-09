// Your code here...
#include<stdio.h>
int main()
{
    int i,j,N,sum;
    scanf("%d",&N);
    sum=N*(N+1)/2;
    for(i=1;i<=N;i++){
        printf("%d",sum);
    }
    return 0;
}
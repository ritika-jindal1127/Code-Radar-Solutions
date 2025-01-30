#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a&1 == 1)
    printf("Set");
    else if(a&1==0)
    printf("Not Set");
}
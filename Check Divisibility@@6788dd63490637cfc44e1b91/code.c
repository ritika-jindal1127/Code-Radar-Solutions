#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%5==0 && a%11==0)
    printf("Divisible");
    else if(a%5!=0)
    printf("Not Divisible");
    else if(a%11!=0)
    printf("Not Divisible");
}
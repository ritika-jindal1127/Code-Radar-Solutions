// Your code here... m 
#include<stdio.h>
int isPrime(int );
void isPrime(int num)
{
   int count=0;
   for(int i=2;i<num;i++)
   {
    if(num%i==0){
       count=0;
       count++;
    
    
    }

   }
   if(count==0){
    printf("1");

   }
   else
   printf("0");
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}
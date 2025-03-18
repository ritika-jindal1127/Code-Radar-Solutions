// Your code here... m 
#include<stdio.h>
//int isPrime(int );
int isPrime(int num)
{
   int count=0;
   for(int i=2;i<num;i++)
   {
    if(num%i==0)
    {
       count=0;
       count++;
    }

   }
   if(count==0){
    return 1;

   }
   else
   return 0;
}
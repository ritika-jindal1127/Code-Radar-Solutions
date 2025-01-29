#include<stdio.h>
int checkLSB(int number)
{
  if(number & 1){
    return 1;
    }
    else{
        return 0;
    }
}
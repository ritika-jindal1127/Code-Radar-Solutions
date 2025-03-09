// Your code here...
#include<stdio.h>
void bubbleSort(int arr[],int n)
{
    int temp;
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void printArray(int arr[],int n){
    for(int m=0;m<n;m++){
        printf("%d ",arr[m]);
    }
}
/*
First Pass (i = 0):

Compare arr[0] (5) and arr[1] (3): Since 5 > 3, swap them. Array becomes: [3, 5, 8, 6, 2].

Compare arr[1] (5) and arr[2] (8): Since 5 < 8, no swap. Array remains: [3, 5, 8, 6, 2].

Compare arr[2] (8) and arr[3] (6): Since 8 > 6, swap them. Array becomes: [3, 5, 6, 8, 2].

Compare arr[3] (8) and arr[4] (2): Since 8 > 2, swap them. Array becomes: [3, 5, 6, 2, 8].
Result after Pass 1: [3, 5, 6, 2, 8]
*/
//loop will exceute i=0,1,2,3,4 becoz n is 5 jab tak ascending order nhi ho jata loop will work
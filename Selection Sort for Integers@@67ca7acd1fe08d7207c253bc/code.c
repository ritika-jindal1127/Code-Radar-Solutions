// Your code here...

int selectionSort (int arr[],int n)
{
  for(int i=0;i<n-1;i++)
  {
   int  minIndex = i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minIndex]){
            minIndex = j;
        }
    }
    temp=arr[minIndex];
    arr[minindex]=arr[i];
    arr[i]=temp;
  }
  printArray(arr,n);
}
printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}



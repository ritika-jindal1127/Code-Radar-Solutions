// Your code here...

selectionSort arr(int arr,n)
{
  for(int i=0;i<n;i++)
  {
    minIndex = i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minIndex]){
            minIndex = j;
        }
    }
    temp=arr[minIndex];
    arr[minindex]=arr[i];
    arr[i]=temp;
  }
  
}



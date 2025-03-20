// Your code here...
/*
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
     int temp=arr[minIndex];
    arr[minIndex]=arr[i];
    arr[i]=temp;
  }
  printArray(arr,n);
}
 int printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
*/
int printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0; // Return 0 to indicate successful execution
}

// Function to perform selection sort
int selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the elements
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    printArray(arr, n); // Print sorted array
    return 0; // Return 0 to indicate successful execution
}

// Your code here...
#include <stdio.h>

 

int findUnsortedSubarray(int arr[], int n) {

    int start = -1, end = -1;

   

    // Step 1: Find the first element from the left which is out of order

    for (int i = 0; i < n - 1; i++) {

        if (arr[i] > arr[i + 1]) {  // Finding the first violation

            start = i;

            break;

        }

    }

   

    // If the array is already sorted

    if (start == -1) return 0;

 

    // Step 2: Find the first element from the right which is out of order

    for (int i = n - 1; i > 0; i--) {

        if (arr[i] < arr[i - 1]) {  // Finding the last violation

            end = i;

            break;

        }

    }

 

    // Step 3: Find min and max values in the unsorted subarray

    int min_val = arr[start], max_val = arr[start];

    for (int i = start; i <= end; i++) {

        if (arr[i] < min_val) min_val = arr[i];

        if (arr[i] > max_val) max_val = arr[i];

    }

 

    // Step 4: Expand the left boundary if needed

    for (int i = 0; i < start; i++) {

        if (arr[i] > min_val) {  // If there's a smaller value before start, update start

            start = i;

            break;

        }

    }

 

    // Step 5: Expand the right boundary if needed

    for (int i = n - 1; i > end; i--) {

        if (arr[i] < max_val) {  // If there's a larger value after end, update end

            end = i;

            break;

        }

    }

 

    // Return the length of the unsorted subarray

    return end - start + 1;

}

 
/*
int main() {

    int t;

    scanf("%d", &t);  // Read the number of test cases

   

    while (t--) {

        int n;

        scanf("%d", &n);  // Read the size of the array

        int arr[10000];

       

        for (int i = 0; i < n; i++) {

            scanf("%d", &arr[i]);  // Read the array elements

        }

 

        printf("%d\n", findUnsortedSubarray(arr, n));  // Print the result

    }

 

    return 0;

}
*/

 

 
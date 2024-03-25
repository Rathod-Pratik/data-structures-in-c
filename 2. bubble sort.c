/*
algoritm for bubble sort
1. Start

2. Define an array arr of size 5 to store the elements.

3. Set n to 5, representing the number of elements in the array.

4. Output "Enter elements of the array: ".

5. Read and store 5 integers into the array arr.

6. Initialize a variable count to 0 for the outer loop.

7. Outer Loop: Repeat n - 1 times:
    a. Increment count by 1.
    b. Initialize a variable i to 0 for the inner loop.
    c. Inner Loop: Repeat n - count - 1 times:
        i. Compare arr[i] with arr[i + 1].
        ii. If arr[i] is greater than arr[i + 1]:
            - Swap arr[i] and arr[i + 1].
    d. End of Inner Loop.
    
8. Output "Sorted array: ".

9. Iterate through the sorted array:
    a. Output each element of arr separated by a space.
    
10. Output a newline character to move to the next line.

11. End.
*/
#include<stdio.h>
int main() {
  int arr[5];
  int n = 5;
  printf("Enter elements of the array: ");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }

  // Bubble sort
  for (int count = 0; count < n - 1; count++) {
    for (int i = 0; i < n - count - 1; i++) {
      if (arr[i] > arr[i + 1]) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
  }
  // Print sorted array
  printf("Sorted array: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

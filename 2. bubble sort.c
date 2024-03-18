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

#include<stdio.h>
int main() {
  int arr[5];
  int n = 5;
  printf("Enter elements of the array: ");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }

  // Bubble sort
  for (int i = 0; i < n ; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
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

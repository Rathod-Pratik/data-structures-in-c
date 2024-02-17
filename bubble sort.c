#include <stdio.h>

int main() {
  int arr[10], x, y, temp;
  printf("Enter the elements of the array: ");
  for (x = 0; x < 10; x++) {
    scanf("%d", &arr[x]);
  }
  for (x = 0; x < 9; x++) {
    for (y = 0; y < 9 - x; y++) {
      if (arr[y] > arr[y + 1]) {
        temp = arr[y];
        arr[y] = arr[y + 1];
        arr[y + 1] = temp;
      }
    }
  }
  printf("The sorted array is: ");
  for (x = 0; x < 10; x++) {
    printf("%d\n", arr[x]);
  }
  return 0;
}
#include <stdio.h>

int main() {
  int arr[10], x, y, temp;
  printf("enter the element of array :");
  for (x = 0; x <= 9; x++) {
    scanf("%d", &arr[x]);
  }
  for (x = 0; x <= 9; x++) {
    for (y = 0; y <= 9; y++) {
      if (arr[x] > arr[y]) {
        temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
      }
    }
  }
  printf("the sorted array is ");
  for (x = 9; x >= 0; x--) {
    printf("%d \n", arr[x]);
  }
  return 0;
}
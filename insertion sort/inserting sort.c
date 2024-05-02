#include <stdio.h>
int main(void) {
    int arr[10];
    int i, j, temp;
    printf("Enter element of array: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 1; i < 10; i++) {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }

    printf("\nSorted array: ");
    for (i = 0; i < 10; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int arr[5], n = 5;
    int low = 0, high = n - 1, ch, fla = 1, i, mid;

    printf("Enter elements of the array in sorted order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to be searched: ");
    scanf("%d", &ch);

    while (low <= high) {
        mid = (low + high) / 2;

        if (ch < arr[mid]) {
            high = mid - 1;
        } 
        else if (arr[mid] < ch) {
            low = mid + 1;
        }
         else {
            printf("Element found at position %d and element is %d\n", mid, ch);
            fla = 0;
            break;
        }
    }

    if (fla == 1) {
        printf("Searched element not found\n");
    }

    return 0;
}

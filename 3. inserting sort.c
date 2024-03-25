/*
algorithm for inserting sort

1. Start

2. Define an array arr of size 10 and initialize it with the given integers.

3. Define integer variables i, j, and temp.

4. Output "Unsorted array: " to indicate the beginning of the unsorted array output.

5. Iterate through the elements of the array and output each element separated by tabs.

6. Outer Loop:
    a. Iterate from the second element (i = 1) to the last element of the array.
        i. Store the current element in temp.
        ii. Set j to i - 1.
        iii. Inner Loop:
            - While j is greater than or equal to 0 and arr[j] is greater than temp:
                - Shift arr[j] one position to the right.
                - Decrement j by 1.
        iv. Insert temp at the correct position (j + 1).

7. Output "Sorted array: " to indicate the beginning of the sorted array output.

8. Iterate through the elements of the sorted array and output each element separated by tabs.

9. End
*/
#include <stdio.h>

int main(void) {
    int arr[10] = {1, 4, 7, 99, 84, 74, 54, 66, 12, 88};
    int i, j, temp;

    printf("Unsorted array: ");
    for (i = 0; i < 10; i++) {
        printf("%d\t", arr[i]);
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

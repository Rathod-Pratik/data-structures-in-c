/*
algorithm for quick sort
1. start

2. Define a constant MAXSIZE to represent the maximum size of the array.

3. Declare functions:
a. sort(elements[], left, right): Sorts the elements in the array within the specified range.
b. quicksort(elements[], maxsize): Initiates the quicksort algorithm on the entire array.

4. Define the function quicksort(elements[], maxsize):
a. Call the sort function with parameters elements[], 0, and maxsize - 1.

5. Define the function sort(elements[], left, right):
a. Declare variables: center, i, j, pivot, and temp.
b. Set i to left, j to right, and calculate center as (left + right) / 2.
c. Set pivot to elements[center].
d. While i is less than or equal to j:
i. Increment i until elements[i] is greater than or equal to pivot.
ii. Decrement j until elements[j] is less than or equal to pivot.
iii. If i is less than or equal to j:
- Swap elements[i] and elements[j].
- Increment i and decrement j.
e. If left is less than j, recursively call sort with parameters elements[], left, and j.
f. If i is less than right, recursively call sort with parameters elements[], i, and right.

6. In the main function:
a. Declare variables: elements[] and maxsize.
b. Prompt the user to enter the number of elements.
c. Read and store the value of maxsize.
d. Prompt the user to enter values one by one and store them in the array elements[].
e. Print "Array before sort:" followed by the elements of the array.
f. Call quicksort function with parameters elements[] and maxsize.
g. Print "Array after sort:" followed by the sorted elements of the array.

7. End.
*/
#include <stdio.h>

#define MAXSIZE 500

void sort(int elements[], int left, int right);
void quicksort(int elements[], int maxsize);

void quicksort(int elements[], int maxsize) {
    sort(elements, 0, maxsize - 1);
}

void sort(int elements[], int left, int right) {
    int center, i, j, pivot, temp;
    
    i = left;
    j = right;
    center = (left + right) / 2;
    pivot = elements[center];

    while (i <= j) {
        while (elements[i] < pivot)
            i++;
        
        while (elements[j] > pivot)
            j--;
        
        if (i <= j) {
            temp = elements[i];
            elements[i] = elements[j];
            elements[j] = temp;
            i++;
            j--;
        }
    }

    if (left < j)
        sort(elements, left, j);
    
    if (i < right)
        sort(elements, i, right);
}

int main() {
    int elements[MAXSIZE];
    int i, maxsize;

    printf("Enter how many elements you want: ");
    scanf("%d", &maxsize);

    printf("\nEnter values one by one:\n");

    for (i = 0; i < maxsize; i++) {
        scanf("%d", &elements[i]);
    }

    printf("\nArray before sort:\n");
    for (i = 0; i < maxsize; i++) {
        printf("%d ", elements[i]);
    }
    
    quicksort(elements, maxsize);

    printf("\n\nArray after sort:\n");

    for (i = 0; i < maxsize; i++) {
        printf("%d ", elements[i]);
    }

    return 0;
}

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

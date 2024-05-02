#include<stdio.h>

#define MAXSIZE 500

int partition(int elements[], int left, int right);
void quicksort(int elements[], int left, int right);

void quicksort(int elements[], int left, int right) {
    if (left < right) {
        int location = partition(elements, left, right);
        quicksort(elements, left, location - 1);
        quicksort(elements, location + 1, right);
    }
}

int partition(int elements[], int left, int right) {
    int pivot = elements[left];
    int start = left;
    int end = right;

    while (start < end) {
        while (elements[start] <= pivot) {
            start++;
        }
        while (elements[end] > pivot) {
            end--;
        }
        if (start < end) {
            int temp = elements[start];
            elements[start] = elements[end];
            elements[end] = temp;
        }
    }
    // Swap pivot to its correct position
    int temp = elements[left];
    elements[left] = elements[end];
    elements[end] = temp;

    return end;
}

int main() {
    int elements[5];
    printf("Enter elements of array: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &elements[i]);
    }
    quicksort(elements, 0, 4);
    printf("Array after sorting: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", elements[i]);
    }
    return 0;
}

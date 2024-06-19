#include <stdio.h>
#include <stdlib.h>

#define size 10

int stk[size], top = -1;

int push() {
    int no;
    if (top >= size - 1) {
        printf("\nStack is full :\n");
        return 0; 
    } 
    else {
        printf("\nEnter number: ");
        scanf("%d", &no);
        stk[++top] = no;
        return 1; 
    }
}

void Display() {
    if (top < 0) {
        printf("Stack is empty\n");
    } 
    else {
        printf("\nStack elements:\n");
        for (int i = 0; i <= top; i++) {
            printf("Position %d: %d\n", i + 1, stk[i]);
        }
    }
}

void pop() {
    if (top < 0) {
        printf("\nStack is empty\n");
    }
    else {
        printf("\nDeleted element is %d\n", stk[top--]);
    }
}

void peep() {
    if (top < 0) {
        printf("\nStack is empty\n");
    } 
    else {
        int x;
        printf("\nEnter position to peep (from top): ");
        scanf("%d", &x);
        if (x < 1 || x > top + 1) {
            printf("\nPosition out of range\n");
        } 
        else {
            printf("\nPeeped element is %d at position %d\n", stk[top - (x - 1)], x);
        }
    }
}

void Change() {
    if (top < 0) {
        printf("\nStack is empty\n");
    } 
    else {
        int x, newElement;
        printf("\nEnter position to change (from top): ");
        scanf("%d", &x);

        if (x < 1 || x > top + 1) {
            printf("Position out of range\n");
        } 
        else {
            printf("\nEnter new element: ");
            scanf("%d", &newElement);
            stk[top - x + 1] = newElement;
            printf("\nChanged element to %d at position %d\n", stk[top - x + 1], x);
        }
    }
}

int main() {
    int ch;
    do {
        printf("\nMain menu:");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Peep");
        printf("\n5. Change");
        printf("\n6. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                if (push()) {
                    printf("\nElement pushed successfully\n");
                }
                break;
            case 2:
                pop();
                break;
            case 3:
                Display();
                break;
            case 4:
                peep();
                break;
            case 5:
                Change();
                break;
            case 6:
                printf("\nExiting program\n");
                exit(0);
            default:
                printf("\nInvalid choice\n");
        }
    } while (ch != 6);

    return 0;
}

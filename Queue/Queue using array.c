#include<stdio.h>
#define size 11

int q[size], front = -1, rear = -1;

void insert(int x) {
    if (rear >= size - 1) {
        printf("Queue is full\n");
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        q[rear] = x;    
    } else {
        rear++;
        q[rear] = x;
    }
}

void delete() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } else if (front == rear) {
        printf("Deleted element is %d\n", q[front]);
        front = rear = -1;
    } else {
        printf("Deleted element is %d\n", q[front]);
        front++;
    }
}

void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } else {
        int i;
        for (i = front; i <= rear; i++) {
            printf("Data is %d\n", q[i]);
        }
    }
}

void peek() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
    } else {
        printf("Peeked element is %d\n", q[front]);
    }
}

int main() {
    int ch, num;
    do {
        printf("\nMain menu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &num);
                insert(num);
                break;

            case 2:
                delete();
                break;

            case 3:
                display();
                break;

            case 4:
                peek();
                break;

            case 5:
                break;

            default:
                printf("Enter a valid value\n");
        }
    } while (ch != 5);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
struct list
{
    int data;
    struct list *next, *prev;
};
typedef struct list node;
node *head, *temp, *prevnode, *newnode;

void create()
{
    newnode = (node *)malloc(sizeof(node));
    if (!newnode)
    {
        printf("\n newnode fail to create");
        return;
    }
    printf("\ninsert data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
}
void insertbeg()
{
    newnode = (node *)malloc(sizeof(node));
    if (!newnode)
    {
        printf("\nFailed to create new node. Memory allocation failed.");
        return;
    }

    printf("\nEnter element: ");
    scanf("%d", &newnode->data);

    newnode->next = head;
    newnode->prev = NULL;

    if (head != NULL)
    {
        head->prev = newnode;
    }

    head = newnode;
}

void Display()
{
    temp = head;
    printf("\nCURRENT ADDR\tDATA\tNEXT ADDR\n");
    while (temp != NULL)
    {
        printf("\n\t%u->\t%d->\t%u\n", temp, temp->data, temp->next);
        temp = temp->next;
    }
}

void count()
{
    temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    printf("\nNumber of elements: %d\n", count);
}

void insertend()
{
    newnode = (node *)malloc(sizeof(node));
    if (!newnode)
    {
        printf("\nFailed to create new node. Memory allocation failed.");
        return;
    }

    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    printf("Enter element: ");
    scanf("%d", &newnode->data);

    newnode->next = NULL;
    newnode->prev = temp;

    if (temp != NULL)
    {
        temp->next = newnode;
    }
    else
    {
        head = newnode;
    }
}
void Delete()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    temp = head;
    prevnode = NULL;

    while (temp->next != NULL)
    {
        prevnode = temp;
        temp = temp->next;
    }

    if (prevnode == NULL)
    {
        head = NULL;
    }
    else
    {
        prevnode->next = NULL;
    }

    free(temp);

    temp = head;

    printf("Last node deleted.\n");
}

int main(void)
{
    {
        int ch;
        int running = 1;

        do
        {
            printf("\nMenu:");
            printf("\n1. Create");
            printf("\n2. Delete");
            printf("\n3. Insert at beginning");
            printf("\n4. Insert at end");
            printf("\n5. Display");
            printf("\n6. Count");
            printf("\n7. Exit");
            printf("\nEnter your choice: ");
            scanf("%d", &ch);

            switch (ch)
            {
            case 1:
                create();
                continue;

            case 2:
                Delete();
                continue;

            case 3:
                insertbeg();
                continue;
            case 4:
                insertend();
                continue;
            case 5:
                Display();
                continue;

            case 6:
                count();
                continue;
            case 7:
                running = 0;
                break;

            default: 
                printf("\nInvalid value");
            }
        } while (running == 1);
        return 0;
    }
    return 0;
}
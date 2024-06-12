#include <stdio.h>

struct list
{
    int data;
    struct list *next;
};

typedef struct list node;

node *head, *newnode, *temp, *prevnode;

// use to create node
void create()
{
    int more = 1;
    while (more)
    {
        node *newnode = (node *)malloc(sizeof(node));
        // if memory is not allocate give error and exit
        if (!newnode)
        {
            printf("Memory allocation failed\n");
            exit(1);
        }

        printf("Enter element: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Do you want to add another element? (1 for Yes, 0 for No): ");
        scanf("%d", &more);
    }
}

// use to delete last node
void Delete()
{
    // if list is empty stop the program
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    temp = head;
    prevnode = NULL;

    //move to last node
    while (temp->next != NULL)
    {
        prevnode = temp;
        temp = temp->next;
    }
    //if previous node is null then head is null
    if (prevnode == NULL)
    {
        head = NULL;
    }
    else
    {
        prevnode->next = NULL;
    }
    //remove space of temp
    free(temp);

    temp = head;

    printf("Last node deleted.\n");
}

//use to display nodes and 
void display()
{
    temp = head;
    printf("\n\tCUR ADDER\tDATA\tNEXT ADDER");
    do
    {
        printf("\n\t%u->\t%d\t  ->%u", temp, temp->data, temp->next);
        temp = temp->next;
    } while (temp != NULL);
}

//use to count nodes
void count()
{
    int i = 0;
    temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        i++;
    }
    printf("\nthere are %d node are available", i);
}

//use to insert element in beginning of list 
void insertbeg()
{
    newnode = (node *)malloc(sizeof(node));
    printf("Enter element to inset at beginning :");
    scanf("%d", &newnode->data);
    if (head == NULL)
    {
        newnode->next = NULL;
    }
    else
    {
        newnode->next = head;
    }
    head = newnode;
}

//use to insert element after spacific position
void insert_specific()
{
    int Pos, i = 1;
    newnode = (node *)malloc(sizeof(node));
    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    printf("Enter position :");
    scanf("%d", &Pos);

    int count = 0;
    temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    if (Pos < 1 || Pos > count + 1)
    {
        printf("invalid value ");
    }
    else
    {
        temp = head;
        while (i < Pos - 1)
        {
            temp = temp->next;
            i++;
        }
        printf("Enter data :");
        scanf("%d", &newnode->data);
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

//use insert element in end of list
void intsetend()
{
    newnode = (node *)malloc(sizeof(node));
    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    printf("enter element to insert :");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if (head == NULL)
    {
        // If the list is empty, set the head to the new node
        head = newnode;
        return;
    }
    temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
int main()
{
    int ch;
    int running = 1;

//use while to run function one by one
    do
    {
        printf("\nMenu:");
        printf("\n1. Create");
        printf("\n2. Delete");
        printf("\n3. Insert at beginning");
        printf("\n4. Insert Specific");
        printf("\n5. Insert at end");
        printf("\n6. Display");
        printf("\n7. Count");
        printf("\n8. Exit");
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
            insert_specific();
            continue;

        case 5:
            intsetend();
            continue;
        case 6:
            display();
            continue;

        case 7:
            count();
            continue;
        case 8:
            running = 0;
            break;

        default:
            printf("\nInvalid value");
        }
    } while (running == 1);
    return 0;
}
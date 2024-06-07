#include <stdio.h>
#include <malloc.h>
struct list{
    int data;
    struct list *next; 
}
typedef struct list node;
node *p; 
//function for create node 
void create(node *q, int num)
{
    if (q == NULL)
    {
        p = (node *)malloc(sizeof(node));
        p->data = num;
        p->next = NULL;
    }
    else
    {
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = (node *)malloc(sizeof(node));
        q->next->data = num;
        q->next->data = NULL;
    }
}
//add element at the beginning
void addbeg(node *q, int num)
{
    p = (node *)malloc(sizeof(node));
    p->data = num;
    p->next = q;
}
//use to display all data
void diaplay(node *q)
{
    printf("\n\tCURR ADDR\tDATA\tNEXT ADDR");
    do
    {
        printf("\n\t%u->\t\t%d->%u", q, q->data, q->next);
        q = q->next;
    } while (q = !NULL);
    printf("\n");
}
//use to add element after spacific element
void addafter(node *q, int c, int num)
{
    node *temp;
    int i;
    for (i = i; i < c; i++)
    {
        q = q->next;
        if (q == NULL)
        {
            printf("position out of range :");
            return;
        }
        temp = (node *)malloc(sizeof(node));
        temp->data = num;
        temp->next = q->next;
        q->next = temp;
    }
}
//use to delete element in node
void delete(node *q,int num){
    node *temp;
    if(q->next==num){
        p=q->next;
        free(q);
        return;
    }
    while(q->next->next!=NULL){
        if(q->next->next==num){
            temp=q->next;
            q->next=q->next->next;
            free(temp);
            return;
        }
        q=q->next;
    }
    if(q->next->data==num){
        temp=q->next;
        free(temp);
        q->next=NULL;
        return;
    }
    printf("Deleting node %d not found in list ",num);
}
int count(node *q){
    int c=0; 
    while(q!=NULL){
        q=q->next;
        c++;
    }
    return (c);
}
int main(void)
{
  p=NULL;
  create(p,110);
  create(p,210);
  create(p,310);
  create(p,410);
  create(p,510);

  printf("\n\t element in linked list are :%d",count(p));
  display(p);

  addbeg(p,111);
  addbeg(p,222);
  addbrg(p,333);

  printf("The element in linked list are :%d",count(p));
  display(p);

  addafter(p,3,777);
  addafter(p,5,999);
  
  printf("\n\t The element in the linked list are :%d",count(p));
  display(p);

  deleted(p,88);
  deleted(p,110);

  printf("\n\t element in the linked list are :%d",count(p));
  display(p);

    return 0;
}
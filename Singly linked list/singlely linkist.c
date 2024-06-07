// this linked list connect each node manually
#include <stdio.h>
struct list
{
  int data;
  struct list *next;
};
typedef struct list linked;

int main()
{
  linked *start, node1, node2, node3, node4;
  int i;

  start = &node1;
  node1.data = 100;
  node1.next = &node2;

  node2.data = 200;
  node2.next = &node3;

  node3.data = 300;
  node3.next = &node4;

  node4.data = 400;
  node4.next = NULL;

  printf("Data in singly linked list given below :");
  printf("\n\tCUR ADR\t\t\tDATA\tNEXT ADDR");

  for (i = 0; i < 4; i++)
  {
    printf("\n\t%u->\t\t%d->%u", start, start->data, start->next);
    start = start->next;
  }
}
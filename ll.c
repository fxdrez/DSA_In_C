// linked list implementation singly linked list
#include <stdio.h>
#include <stdlib.h>
int main()
{
  struct node
  {
    int data;
    struct node *next;
  };
  struct node *head = 0, *newnode, *temp;
  int choice, count = 0;
  while (choice != 0)
  {
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the data :->");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    if (head == 0)
    {
      head = temp = newnode;
    }
    else
    {
      temp->next = newnode;
      temp = newnode;
    }
    printf("Do you want to continue? press any number to continue or press 0 to terminate...->");
    scanf("%d", &choice);
  }
  temp = head;
  while (temp != 0)
  {
    printf("\n%d", temp->data);
    temp = temp->next;
    count++;
  }
  printf("\n%d nodes are present", count);
  free(newnode);
  return 0;
}

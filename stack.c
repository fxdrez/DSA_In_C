#include <stdio.h>
#define N 10
int stack[N];
int top = -1;
int push()
{

   int x;
   printf("\nEnter the element: ");
   scanf("%d", &x);
   if (top == N - 1)
   {
      printf("\nStack is full"); // overflow
   }
   else
   {
      top++;
      stack[top] = x;
      printf("\n%d is added to stack", stack[top]);
   }
   return 0;
}
int pop()
{
   int item;
   if (top == -1)
   {
      printf("\nStack is Empty"); // underflow
   }
   else
   {
      item = stack[top];
      top--;
      printf("\n%d has been removed", item);
   }
   return 0;
}
int peek()
{
   if (top == -1)
   {
      printf("\nStack is empty");
   }
   else
   {
      printf("\n%d is the top element", stack[top]);
   }
   return 0;
}
int display()
{
   for (int i = top; i >= 0; i--)
   {
      printf("\n%d", stack[i]);
   }
   return 0;
}
int main()
{
   int choice;
   do
   {
      printf("\nEnter the number:- 1-Push 2-Pop 3-Peek 4-display 0-EndStack -> ");
      scanf("%d", &choice);
      switch (choice)
      {
      case 1:
         push();
         break;
      case 2:
         pop();
         break;
      case 3:
         peek();
         break;
      case 4:
         display();
         break;
      case 0:
         printf("\nStack is terminated!!");
         break;
      default:
         printf("\nInvalid Choice");
         break;
      }

   } while (choice != 0);
   return 0;
}
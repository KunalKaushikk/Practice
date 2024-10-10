#include <stdio.h>

/*#define MAXSIZE 100
int stack[MAXSIZE];
int top = -1;

int isempty()
{

   if (top == -1)
      return 1;
   else
      return 0;
}

int isfull()
{

   if (top == MAXSIZE)
      return 1;
   else
      return 0;
}

int peek()
{
   return stack[top];
}

int pop()
{
   int data;

   if (!isempty())
   {
      data = stack[top];
      top = top - 1;
      return data;
   }
   else
   {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

int push(int data)
{

   if (!isfull())
   {
      top = top + 1;
      stack[top] = data;
   }
   else
   {
      printf("Could not insert data, Stack is full.\n");
   }
}*/

int main()
{
   // push items on to the stack
   push(3);
   push(5);
   push(9);
   push(1);
   push(12);
   push(15);

   printf("Element at top of the stack: %d\n", peek());
   printf("Elements: \n");

   // print stack data
   while (!isempty())
   {
      int data = pop();
      printf("%d\n", data);
   }

   printf("Stack full: %s\n", isfull() ? "true" : "false");
   printf("Stack empty: %s\n", isempty() ? "true" : "false");

   return 0;
}
#include <stdio.h>
#include <conio.h>

#define SIZE 10

void push(int);
void pop();
void display();

int stack[SIZE], top = -1;

void main()
{
   int value, choice;
   while (1)
   {
      printf("1. Push\n2. Pop\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d", &choice);
      switch (choice)
      {
      case 1:
         printf("Enter the value to be insert: ");
         scanf("%d", &value);
         push(value);
         break;
      case 2:
         pop();
         break;
      case 3:
         display();
         break;
      default:
         printf("\nWrong selection!!! Try again!!!");
      }
   }
}
void push(int value)
{
   if (top == SIZE - 1)
      printf("\nStack is Full!!! Insertion is not possible!!!");
   else
   {
      top++;
      stack[top] = value;
      printf("\nInsertion success!!!");
   }
}
void pop()
{
   if (top == -1)
      printf("\nStack is Empty!!! Deletion is not possible!!!");
   else
   {
      printf("\nDeleted : %d", stack[top]);
      top--;
   }
}
void display()
{
   if (top == -1)
      printf("\nStack is Empty!!!");
   else
   {
      int i;
      printf("\nStack elements are:\n");
      for (i = top; i >= 0; i--)
         printf("%d\n", stack[i]);
   }
}
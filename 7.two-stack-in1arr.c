#include <stdio.h>
#define SIZE 20
int array[SIZE];
int top1 = -1;
int top2 = SIZE;

void push1(int data)
{
  if (top1 < top2 - 1)
  {
      top1++;
    array[top1] = data;
  }
  else
  {
    printf("Stack is full");
  }
}

void push2(int data)
{
  if (top1 < top2 - 1)
  {
    top2--;
    array[top2] = data;
  }
  else
  {
    printf("Stack is full..\n");
  }
}

void pop1()
{
  if (top1 >= 0)
  {
    int popped_element = array[top1];
    top1--;
    printf("%d is being popped from Stack 1\n", popped_element);
  }
  else
  {
    printf("Stack is Empty \n");
  }
}

void pop2()
{
  if (top2 < SIZE)
  {
    int popped_element = array[top2];
    top2++; 
    printf("%d is being popped from Stack 2\n", popped_element);
  }
  else
  {
    printf("Stack is Empty!\n");
  }
}

void display_stack1()
{
  int i;
  printf("STACK 1 : ");
  for (i = top1; i >= 0; --i)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void display_stack2()
{
  int i;
  printf("STACK 2 : ");
  for (i = top2; i < SIZE; ++i)
  {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main()
{
  
  int choice, data;

  printf("We can push a total of 20 values\n");

  while(1) {
    printf("1. Push to Stack 1\n");
    printf("2. Push to Stack 2\n");
    printf("3. Pop from Stack 1\n");
    printf("4. Pop from Stack 2\n");
    printf("5. Display Stack 1\n");
    printf("6. Display Stack 2\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
      case 1:
        printf("Enter the value to push: ");
        scanf("%d", &data);
        push1(data);
        break;
      case 2:
        printf("Enter the value to push: ");
        scanf("%d", &data);
        push2(data);
        break;
      case 3:
        pop1();
        break;
      case 4:
        pop2();
        break;
      case 5:
        display_stack1();
        break;
      case 6:
        display_stack2();
        break;
      case 7:
        return 0;
      default:
        printf("Invalid choice\n");
    }
  }

  return 0;
}
// Stack Implementation using Array

#include <stdio.h>

#define MAX_STACK_SIZE 100

int push(int stack[], int *top, int item);
int pop(int stack[], int *top);
int peek(int stack[], int top);
int display(int stack[], int top);
int isEmpty(int stack[], int top);
int isFull(int stack[], int top);

void main()
{
    int stack[MAX_STACK_SIZE];
    int top = -1;
    int item;
    int choice;

    do
    {
        printf("\n\nStack Implementation using Array\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. IsEmpty\n");
        printf("5. IsFull\n");
        printf("6. Display\n");
        printf("7. Size\n");
        printf("8. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the item to be pushed: ");
            scanf("%d", &item);
            push(stack, &top, item);
            break;
        case 2:
            item = pop(stack, &top);
            if (item != -1)
                printf("Popped item: %d\n", item);
            break;
        case 3:
            item = peek(stack, top);
            if (item != -1)
                printf("Top item: %d\n", item);
            break;
        case 4:
            if (isEmpty(stack, top))
                printf("Stack is empty\n");
            else
                printf("Stack is not empty\n");
            break;
        case 5:
            if (isFull(stack, top))
                printf("Stack is full\n");
            else
                printf("Stack is not full\n");
            break;
        case 6:
            printf("Content of the stack: ");
            display(stack, top);
            break;
        case 7:
            printf("Size of the stack: %d\n", top + 1);
            break;
        case 8:
            printf("Exiting...\n");
            break;
        default:
            printf("Wrong choice\n");
        }
    } while (choice != 8);
}

int isFull(int stack[], int top)
{
    if (top == MAX_STACK_SIZE - 1)
        return 1;
    else
        return 0;
}

int isEmpty(int stack[], int top)
{
    if (top == -1)
        return 1;
    else
        return 0;
}

int push(int stack[], int *top, int item)
{
    if (isFull(stack, *top))
    {
        printf("Stack is full\n");
        return 0;
    }
    stack[++(*top)] = item;
    return 1;
}
int pop(int stack[], int *top)
{
    if (isEmpty(stack, *top))
    {
        printf("Stack is empty\n");
        return 0;
    }
    return stack[(*top)--];
}

int peek(int stack[], int top)
{
    if (isEmpty(stack, top))
    {
        printf("Stack is empty\n");
        return 0;
    }
    return stack[top];
}

int display(int stack[], int top)
{
    int i;
    if (isEmpty(stack, top))
    {
        printf("Stack is empty\n");
        return 0;
    }
    for (i = top; i >= 0; i--)
        printf("%d ", stack[i]);
    printf("\n");
    return 1;
}

// Using array and functions implement two Stacks and its operations (insert, delete, display).

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
    int stack1[MAX_STACK_SIZE];
    int stack2[MAX_STACK_SIZE];
    int top1 = -1;
    int top2 = -1;
    int item;
    int choice;
    int stack_number;

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
            printf("Enter stack number to perform operation on (1 or 2): ");
            scanf("%d", &stack_number);
            if (stack_number == 1)
                push(stack1, &top1, item);
            else
                push(stack2, &top2, item);

            break;
        case 2:
            printf("Enter stack number to perform operation on (1 or 2): ");
            scanf("%d", &stack_number);
            if (stack_number == 1)
                item = pop(stack1, &top1);
            else
                item = pop(stack2, &top2);
            if (item != -1)
                printf("Popped item: %d\n", item);
            break;
        case 3:
            printf("Enter stack number to perform operation on (1 or 2): ");
            scanf("%d", &stack_number);
            if (stack_number == 1)
                item = peek(stack1, top1);
            else
                item = peek(stack2, top2);
            if (item != -1)
                printf("Top item: %d\n", item);
            break;
        case 4:
            printf("Enter stack number to perform operation on (1 or 2): ");
            scanf("%d", &stack_number);
            if (stack_number == 1)
            {
                if (isEmpty(stack1, top1))
                    printf("Stack is empty\n");
                else
                    printf("Stack is not empty\n");
            }
            else
            {
                if (isEmpty(stack2, top2))
                    printf("Stack is empty\n");
                else
                    printf("Stack is not empty\n");
            }
            break;
        case 5:
            printf("Enter stack number to perform operation on (1 or 2): ");
            scanf("%d", &stack_number);
            if (stack_number == 1)
            {
                if (isFull(stack1, top1))
                    printf("Stack is empty\n");
                else
                    printf("Stack is not empty\n");
            }
            else
            {
                if (isFull(stack2, top2))
                    printf("Stack is empty\n");
                else
                    printf("Stack is not empty\n");
            }
            break;
        case 6:
            printf("Enter stack number to perform operation on (1 or 2): ");
            scanf("%d", &stack_number);
            printf("Content of the stack: ");
            if (stack_number == 1)
            {
                display(stack1, top1);
            }
            else
            {
                display(stack2, top2);
            }

            break;
        case 7:
            printf("Enter stack number to perform operation on (1 or 2): ");
            scanf("%d", &stack_number);
            if (stack_number == 1)
                printf("Size of the stack: %d\n", top1 + 1);
            else
                printf("Size of the stack: %d\n", top2 + 1);
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

// 1. Using array and functions implement Queue data structure and its operations like insert, delete, and display.

#include <stdio.h>

#define MAX_QUEUE_SIZE 100

int enqueue(int queue[], int *front, int *rear, int item);
int dequeue(int queue[], int *front, int *rear);
int peek(int queue[], int front, int rear);
int display(int queue[], int front, int rear);
int isEmpty(int front, int rear);
int isFull(int front, int rear);

void main()
{
    int queue[MAX_QUEUE_SIZE];
    int front = -1;
    int rear = -1;
    int item;
    int choice;
    while (choice != 8)
    {
        printf("--------------Queue Implementation using Array----------------\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
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
            printf("Enter the item to be enqueued: ");
            scanf("%d", &item);
            enqueue(queue, &front, &rear, item);
            break;

        case 2:
            dequeue(queue, &front, &rear);
            break;

        case 3:
            printf("Peeked Element: %d\n", peek(queue, front, rear));
            break;

        case 4:
            if (isEmpty(front, rear))
            {
                printf("Queue is empty\n");
            }
            else
            {
                printf("Queue is not empty\n");
            }
            break;

        case 5:
            if (isFull(front, rear))
            {
                printf("Queue is Full\n");
            }
            else
            {
                printf("Queue is not Full\n");
            }
            break;

        case 6:
            printf("Queue: ");
            display(queue, front, rear);
            break;

        case 7:
            printf("Size of Queue: %d", rear + 1);
            break;

        case 8:
            printf("Exiting...\n");
            break;

        default:
            printf("Wrong choice\n");
            break;
        }
    }
}

int isFull(int front, int rear)
{
    if (front == 0 && rear == MAX_QUEUE_SIZE - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(int front, int rear)
{
    if (front == rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int enqueue(int queue[], int *front, int *rear, int item)
{
    if (isFull(*front, *rear))
    {
        printf("Queue is full\n");
        return 0;
    }
    else
    {
        queue[++*rear] = item;
        return 1;
    }
}

int dequeue(int queue[], int *front, int *rear)
{
    if (isEmpty(*front, *rear))
    {
        printf("Queue is empty\n");
        return 0;
    }
    else
    {
        return queue[++*front];
    }
}

int peek(int queue[], int front, int rear)
{
    if (isEmpty(front, rear))
    {
        printf("Queue is empty\n");
        return 0;
    }
    else
    {
        return queue[front];
    }
}

int display(int queue[], int front, int rear)
{
    if (isEmpty(front, rear))
    {
        printf("Queue is empty\n");
        return 0;
    }
    for (int i = front + 1; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
    return 1;
}
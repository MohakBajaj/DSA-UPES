// Using single linked list and functions implement Stack and its operations like insert, delete, and display.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top;

void insert()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("\nMemory not allocated");
        return;
    }
    else
    {
        printf("\nEnter the data to be inserted");
        scanf("\n%d", &temp->data);
        temp->next = top;
        top = temp;
        printf("Node inserted");
    }
}

void pop()
{
    if (top != NULL)
    {
        struct node *temp;
        temp = top;
        top = top->next;
        printf("\nPopped element is %d", temp->data);
        free(temp);
    }
    else
    {
        printf("\nStack is already empty");
    }
}

void isEmpty()
{
    if (top == NULL)
    {
        printf("\nStack is empty");
    }
    else
    {
        printf("\nStack is not empty");
    }
}

void peek()
{
    if (top != NULL)
    {
        printf("\nTop element is %d", top->data);
    }
    else
    {
        printf("\nStack is empty");
    }
}

void display()
{
    struct node *temp;
    temp = top;
    if (temp == NULL)
    {
        printf("\nStack is empty");
        return;
    }
    else
    {
        printf("\nStack elements are: ");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

void main()
{
    int choice;
    top = NULL;
    while (1)
    {
        printf("\n\nStack using linked list");
        printf("\n***************************");
        printf("\nChoose from the Following to perform operation on stack");
        printf("\n1. Insert");
        printf("\n2. Pop");
        printf("\n3. IsEmpty");
        printf("\n4. Peek");
        printf("\n5. Display");
        printf("\n6. Exit");
        printf("\nEnter your choice");
        scanf("\n%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            pop();
            break;
        case 3:
            isEmpty();
            break;
        case 4:
            peek();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
        default:
            printf("\nInvalid choice");
        }
    }
}
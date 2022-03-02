// WAP to Implement Circular Linked List and its operations.

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node *create_node(int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

void insert_at_beg(int data)
{
    struct node *temp = create_node(data);
    temp->next = head;
    head = temp;
}

void insert_at_end(int data)
{
    struct node *temp = create_node(data);
    struct node *temp2 = head;
    while (temp2->next != NULL)
        temp2 = temp2->next;
    temp2->next = temp;
}

void insert_at_pos(int data, int pos)
{
    int i;
    struct node *temp = create_node(data);
    struct node *temp2 = head;
    for (i = 0; i < pos - 1; i++)
        temp2 = temp2->next;
    temp->next = temp2->next;
    temp2->next = temp;
}

void delete_at_beg()
{
    struct node *temp = head;
    head = head->next;
    free(temp);
}

void delete_at_end()
{
    struct node *temp = head;
    struct node *temp2 = head;
    while (temp->next != NULL)
    {
        temp2 = temp;
        temp = temp->next;
    }
    temp2->next = NULL;
    free(temp);
}

void delete_at_pos(int pos)
{
    int i;
    struct node *temp = head;
    for (i = 0; i < pos - 1; i++)
        temp = temp->next;
    struct node *temp2 = temp->next;
    temp->next = temp->next->next;
    free(temp2);
}

void display()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void main()
{
    int choice, data, pos;
    while (1)
    {
        printf("\n1. Insert at beginning\n2. Insert at end\n3. Insert at position\n4. Delete at beginning\n5. Delete at end\n6. Delete at position\n7. Display\n8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data: ");
            scanf("%d", &data);
            insert_at_beg(data);
            break;
        case 2:
            printf("Enter the data: ");
            scanf("%d", &data);
            insert_at_end(data);
            break;
        case 3:
            printf("Enter the data: ");
            scanf("%d", &data);
            printf("Enter the position: ");
            scanf("%d", &pos);
            insert_at_pos(data, pos);
            break;
        case 4:
            delete_at_beg();
            break;
        case 5:
            delete_at_end();
            break;
        case 6:
            printf("Enter the position: ");
            scanf("%d", &pos);
            delete_at_pos(pos);
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
        default:
            printf("Wrong choice\n");
        }
    }
}
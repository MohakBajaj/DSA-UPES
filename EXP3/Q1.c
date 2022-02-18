// Implement single Linked List data structure and its operations like insert and delete in the beginning/end and nth position of the list, and display the items stored in the linked list

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head;

void beginInsert()
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
        temp->next = head;
        head = temp;
        printf("Node inserted at begining");
    }
}

void endInsert()
{
    struct node *temp;
    struct node *ptr;
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
        ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        temp->next = NULL;
        printf("Node inserted at end");
    }
}

void randomInsert()
{
    struct node *temp;
    struct node *ptr;
    int loc;
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
        printf("\nEnter the location where you want to insert the data");
        scanf("\n%d", &loc);
        ptr = head;
        while (loc > 0)
        {
            ptr = ptr->next;
            if (ptr == NULL)
            {
                printf("\ncan't insert\n");
                return;
            }
            loc--;
        }
        temp->next = ptr->next;
        ptr->next = temp;
        printf("Node inserted at %d location", loc);
    }
}

void begin_delete()
{
    struct node *temp;
    temp = head;
    if (temp == NULL)
    {
        printf("\nList is empty");
        return;
    }
    else
    {
        head = temp->next;
        printf("\nNode deleted from begining");
        free(temp);
    }
}

void last_delete()
{
    struct node *temp;
    struct node *ptr;
    temp = head;
    if (temp == NULL)
    {
        printf("\nList is empty");
        return;
    }
    else
    {
        while (temp->next != NULL)
        {
            ptr = temp;
            temp = temp->next;
        }
        ptr->next = NULL;
        printf("\nNode deleted from end");
        free(temp);
    }
}

void random_delete()
{
    struct node *temp;
    struct node *ptr;
    int loc;
    temp = head;
    if (temp == NULL)
    {
        printf("\nList is empty");
        return;
    }
    else
    {
        printf("\nEnter the location where you want to delete the data");
        scanf("\n%d", &loc);
        while (loc > 1)
        {
            ptr = temp;
            temp = temp->next;
            loc--;
        }
        ptr->next = temp->next;
        printf("\nNode deleted from %d location", loc);
        free(temp);
    }
}

void display()
{
    struct node *temp;
    temp = head;
    if (temp == NULL)
    {
        printf("\nList is empty");
        return;
    }
    else
    {
        printf("\nThe list is: ");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

void main()
{
    int choice = 0;
    while (choice != 8)
    {
        printf("\n\n*********Linked List*********\n");
        printf("\nChoose one option from the following list of Operations on Linked List\n");
        printf("\n===============================================\n");
        printf("\n1.Insert at begining\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from End\n6.Delete from any location\n7.Display\n8.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d", &choice);
        switch (choice)
        {
        case 1:
            beginInsert();
            break;
        case 2:
            endInsert();
            break;
        case 3:
            randomInsert();
            break;
        case 4:
            begin_delete();
            break;
        case 5:
            last_delete();
            break;
        case 6:
            random_delete();
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("Please enter valid choice..");
        }
    }
}

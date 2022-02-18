// perform the addition of the polynomical equations using the single linked list and array

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int coeff;
    int pow;
    struct Node *next;
};

void create_node(int x, int y, struct Node **temp)
{
    struct Node *r, *z;
    z = *temp;
    if (z == NULL)
    {
        r = (struct Node *)malloc(sizeof(struct Node));
        r->coeff = x;
        r->pow = y;
        *temp = r;
        r->next = (struct Node *)malloc(sizeof(struct Node));
        r = r->next;
        r->next = NULL;
    }
    else
    {
        r->coeff = x;
        r->pow = y;
        r->next = (struct Node *)malloc(sizeof(struct Node));
        r = r->next;
        r->next = NULL;
    }
}

void polyadd(struct Node *poly1, struct Node *poly2,
             struct Node *poly)
{
    while (poly1->next && poly2->next)
    {
        if (poly1->pow > poly2->pow)
        {
            poly->pow = poly1->pow;
            poly->coeff = poly1->coeff;
            poly1 = poly1->next;
        }

        else if (poly1->pow < poly2->pow)
        {
            poly->pow = poly2->pow;
            poly->coeff = poly2->coeff;
            poly2 = poly2->next;
        }

        else
        {
            poly->pow = poly1->pow;
            poly->coeff = poly1->coeff + poly2->coeff;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }

        poly->next = (struct Node *)malloc(sizeof(struct Node));
        poly = poly->next;
        poly->next = NULL;
    }
    while (poly1->next || poly2->next)
    {
        if (poly1->next)
        {
            poly->pow = poly1->pow;
            poly->coeff = poly1->coeff;
            poly1 = poly1->next;
        }
        if (poly2->next)
        {
            poly->pow = poly2->pow;
            poly->coeff = poly2->coeff;
            poly2 = poly2->next;
        }
        poly->next = (struct Node *)malloc(sizeof(struct Node));
        poly = poly->next;
        poly->next = NULL;
    }
}

void show(struct Node *node)
{
    while (node->next != NULL)
    {
        printf("%dx^%d", node->coeff, node->pow);
        node = node->next;
        if (node->coeff >= 0)
        {
            if (node->next != NULL)
                printf("+");
        }
    }
}

int main()
{
    printf("======================Using Linked List==========================\n");
    struct Node *poly1 = NULL, *poly2 = NULL, *poly = NULL;

    // Create first list of 5x^2 + 4x^1 + 2x^0
    create_node(5, 2, &poly1);
    create_node(4, 1, &poly1);
    create_node(2, 0, &poly1);

    // Create second list of -5x^1 - 5x^0
    create_node(-5, 1, &poly2);
    create_node(-5, 0, &poly2);

    printf("1st Number: ");
    show(poly1);

    printf("\n2nd Number: ");
    show(poly2);

    poly = (struct Node *)malloc(sizeof(struct Node));

    // Function add two polynomial numbers
    polyadd(poly1, poly2, poly);

    // Display resultant List
    printf("\nAdded polynomial: ");
    show(poly);

    printf("\n======================Using Array==========================\n");

    int a[10] = {2, 5, 1, 3, 0, 8}, b[10] = {2, 4, 1, 2, 0, 1}, c[10], m = 3, n = 3, k, k1, i, j, x;

    printf("First polynomial is: ");
    k1 = 0;
    if (a[k1 + 1] == 1)
        printf("x^%d", a[k1]);
    else
        printf("%dx^%d", a[k1 + 1], a[k1]);
    k1 += 2;
    while (k1 < 2 * n)
    {
        printf("+%dx^%d", a[k1 + 1], a[k1]);
        k1 += 2;
    }
    printf("\nSecond polynomial is: ");
    k1 = 0;
    if (b[k1 + 1] == 1)
        printf("x^%d", b[k1]);
    else
        printf("%dx^%d", b[k1 + 1], b[k1]);
    k1 += 2;
    while (k1 < 2 * n)
    {
        printf("+%dx^%d", b[k1 + 1], b[k1]);
        k1 += 2;
    }
    i = 0;
    j = 0;
    k = 0;
    while (m > 0 && n > 0)
    {
        if (a[i] == b[j])
        {
            c[k + 1] = a[i + 1] + b[j + 1];
            c[k] = a[i];
            m--;
            n--;
            i += 2;
            j += 2;
        }
        else if (a[i] > b[j])
        {
            c[k + 1] = a[i + 1];
            c[k] = a[i];
            m--;
            i += 2;
        }
        else
        {
            c[k + 1] = b[j + 1];
            c[k] = b[j];
            n--;
            j += 2;
        }
        k += 2;
    }
    while (m > 0)
    {
        c[k + 1] = a[i + 1];
        c[k] = a[i];
        k += 2;
        i += 2;
        m--;
    }
    while (n > 0)
    {
        c[k + 1] = b[j + 1];
        c[k] = b[j];
        k += 2;
        j += 2;
        n--;
    }
    printf("\nSum of the two polynomials is: ");
    k1 = 0;
    if (c[k1 + 1] == 1)
        printf("x^%d", c[k1]);
    else
        printf("%dx^%d", c[k1 + 1], c[k1]);
    k1 += 2;
    while (k1 < k)
    {
        if (c[k1 + 1] == 1)
            printf("+x^%d", c[k1]);
        else
            printf("+%dx^%d", c[k1 + 1], c[k1]);
        k1 += 2;
    }

    return 0;
}
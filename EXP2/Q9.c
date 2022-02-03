// Design a structure ‘product’ to store the details of the product purchased like product name, price per unit, the number of quantities purchased, and amount spent. Get the name, price per unit, and the number of quantities of the product purchased. Calculate the amount spent on the product and then display all the details of the procured product using structure pointers.

#include <stdio.h>

struct product
{
    char name[20];
    float price;
    int quantity;
    float amount;
};

void main()
{
    struct product *p;
    p = (struct product *)malloc(sizeof(struct product));
    printf("Enter the name of the product: ");
    scanf("%s", p->name);
    printf("Enter the price per unit: ");
    scanf("%f", &p->price);
    printf("Enter the quantity: ");
    scanf("%d", &p->quantity);
    p->amount = p->price * p->quantity;
    printf("\nProduct name: %s", p->name);
    printf("\nPrice per unit: %f", p->price);
    printf("\nQuantity: %d", p->quantity);
    printf("\nAmount: %f", p->amount);
}
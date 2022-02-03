// Add two complex numbers by passing structure to a function as an argument.

#include <stdio.h>

struct Complex
{
    int real;
    int imaginary;
};

void ComplexAdd(struct Complex *c1, struct Complex *c2)
{
    c1->real = c1->real + c2->real;
    c1->imaginary = c1->imaginary + c2->imaginary;
}

void main()
{
    struct Complex c1, c2, c3;
    printf("Enter the real and imaginary part of the first complex number: ");
    scanf("%d %d", &c1.real, &c1.imaginary);
    printf("Enter the real and imaginary part of the second complex number: ");
    scanf("%d %d", &c2.real, &c2.imaginary);
    ComplexAdd(&c3, &c1);
    ComplexAdd(&c3, &c2);
    printf("\nThe sum of the two complex numbers is: %d + %di", c3.real, c3.imaginary);
}
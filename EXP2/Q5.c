// Create an array ‘a1’ with ‘n’ elements.

#include <stdio.h>

void main()
{
    int n, array[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Entered Array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("[%d,] ", array[i]);
    }
}
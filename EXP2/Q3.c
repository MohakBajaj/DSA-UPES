// Store ‘n’ numbers (integers or real) in an array in ascending or descending order. Conduct a binary search for a given number and report success or failure in the form of a suitable message.

#include <stdio.h>

void binarySearch()
{
    int first, last, middle, n, search, array[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &search);
    first = 0;
    last = n - 1;
    middle = (first + last) / 2;
    while (first <= last)
    {
        if (array[middle] == search)
        {
            printf("Element found at index %d", middle);
            break;
        }
        else if (array[middle] < search)
        {
            first = middle + 1;
        }
        else
        {
            last = middle - 1;
        }
        middle = (first + last) / 2;
    }
    if (first > last)
    {
        printf("Element not found");
    }
}

void main()
{
    binarySearch();
}
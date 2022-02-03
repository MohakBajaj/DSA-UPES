// Copy all elements of ‘a1’ into another array ‘a2’ using pointers. Display the contents of both the arrays using pointers.

#include <stdio.h>

void printArray(int *arr, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d, ", *(arr + i));
    }
}

void main()
{
    int source_arr[100], dest_arr[100];
    int size, i;

    int *source_ptr = source_arr;
    int *dest_ptr = dest_arr;

    int *end_ptr;

    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", (source_ptr + i));
    }

    end_ptr = &source_arr[size - 1];

    printf("\nSource array before copying: ");
    printArray(source_arr, size);

    while (source_ptr <= end_ptr)
    {
        *dest_ptr = *source_ptr;
        source_ptr++;
        dest_ptr++;
    }

    printf("\n\nSource array after copying: ");
    printArray(source_arr, size);

    printf("\nDestination array after copying: ");
    printArray(dest_arr, size);
}

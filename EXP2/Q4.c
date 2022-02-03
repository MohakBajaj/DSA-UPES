// Find out the largest and smallest number in a given array.

#include <stdio.h>

void findLargestSmallest()
{
    int n, array[100], largest, smallest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    largest = array[0];
    smallest = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] > largest)
        {
            largest = array[i];
        }
        if (array[i] < smallest)
        {
            smallest = array[i];
        }
    }
    printf("Largest number is %d\n", largest);
    printf("Smallest number is %d\n", smallest);
}

void main()
{
    findLargestSmallest();
}
#include <stdio.h>

void main()
{
    int array[10];
    int i, N, keynum, found = 0;

    printf("Enter the value of N\n");
    scanf("%d", &N);

    printf("Enter the elements one by one\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Input array is\n");
    for (i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nEnter the element to be searched\n");
    scanf("%d", &keynum);

    // Linear search begins
    for (i = 0; i < N; i++)
    {
        if (keynum == array[i])
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("SUCCESSFUL SEARCH\n");
    else
        printf("Search is FAILED\n");
}
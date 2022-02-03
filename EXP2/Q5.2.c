// Merge the contents of ‘a1’ and ‘a2’ into a new array ‘a3’.

#include <stdio.h>

void main()
{
    int a1[5] = {1, 2, 3, 4, 5};
    int a2[5] = {6, 7, 8, 9, 10};
    int a3[10];
    int i;

    for (i = 0; i < 5; i++)
        a3[i] = a1[i];
    for (i = 0; i < 5; i++)
        a3[i + 5] = a2[i];

    for (i = 0; i < 10; i++)
        printf("%d ", a3[i]);
}
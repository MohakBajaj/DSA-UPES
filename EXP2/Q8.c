// Count the number of words in a string.

#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    int count_words = 0;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ' ')
            count_words++;
    }

    printf("\nTotal number of words: %d", count_words + 1);
}
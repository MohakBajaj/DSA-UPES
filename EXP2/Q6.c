// Find the total number of alphabets, digits or special characters in a string.

#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    int count_alphabets = 0, count_digits = 0, count_special_characters = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            count_alphabets++;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            count_alphabets++;
        else if (str[i] >= '0' && str[i] <= '9')
            count_digits++;
        else
            count_special_characters++;
    }

    printf("\nTotal number of alphabets: %d", count_alphabets);
    printf("\nTotal number of digits: %d", count_digits);
    printf("\nTotal number of special characters: %d", count_special_characters);
}
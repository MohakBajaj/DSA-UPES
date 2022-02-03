//Find whether the entered string is palindrome or not.

#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    int i, j, len;
    printf("Enter the string: ");
    gets(str);
    len = strlen(str);
    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            printf("Not a palindrome");
            break;
        }
        else
        {
            printf("Palindrome");
            break;
        }
    }
}
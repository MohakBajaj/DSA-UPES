// Reverse a string using stack.

#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(char str[])
{
    int n = strlen(str), i;

    for (i = 0; i < n / 2; i++)
        swap(&str[i], &str[n - i - 1]);
}

int main()
{
    char str[] = "Mohak Bajaj";

    reverse(str);
    printf("Reversed string is %s", str);

    return 0;
}
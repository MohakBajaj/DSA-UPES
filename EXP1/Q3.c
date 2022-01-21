//3. Convert uppercase string to lowercase using for loop
#include<stdio.h>
#include<string.h>
int main()
{
    char array[30];
    printf("Enter the uppercase string : ");
    fgets(array,30,stdin);

    for(int i=0;i<strlen(array);i++)
    {
        if(array[i]>=65 && array[i]<=90)
        array[i]=array[i]+32;
    }

    printf("The lowercase string is : %s",array);
    return 0;
}

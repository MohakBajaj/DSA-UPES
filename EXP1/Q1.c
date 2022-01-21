// 1. Find sum of all array elements using recursion, iteration.
#include<stdio.h>
int sum(int a[50],int n);    //function declaration
int main()
{
    int array[50],n,add=0;
    printf("\nEnter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the elements of the array : \n");
    for(int i=0;i<n;i++)
    {
        printf("Enter the element %d : ",i+1);
        scanf("%d",&array[i]);
    }

    //by recursion
    printf("Sum of the array elements : %d",sum(array,n));

    //iteration
    for(int i=0;i<n;i++)
    {
        add=add+array[i];
    }
    printf("\nSum of the array elements through iteration : %d",add);
}
int sum(int a[50],int n)
{
    static int result =0,i;
    if(i<n)
    {
        result+=a[i];
        i++;
        sum(a,n);
    }
    return result;
}













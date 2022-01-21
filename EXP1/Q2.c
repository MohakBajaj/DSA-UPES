//2. Create an array ‘a1’ with ‘n’ elements. Insert an element in ith position 
//of ‘a1’ and also delete an element from jth position of ‘a1’
#include<stdio.h>
int main()
{
    int a1[100],n,c,ins_postion,del_position,new_element,i,m=0;
    printf("\nEnter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: \n");
    for(int i=1;i<=n;i++)
    {
        printf("Enter the element %d : ",i);
        scanf("%d",&a1[i]);
    }
    
    printf("Enter the position where you have to insert a new element :");
    scanf("%d",&ins_postion);
    printf("Enter the new element :");
    scanf("%d",&new_element);
    for(i=n+1;i>=ins_postion;i--)
    {
      a1[i]=a1[i-1];
    }
    a1[ins_postion]=new_element;
    printf("Array a1 after insertion is :");
    for(i=1;i<=n+1;i++)
    {
        printf("%d ",a1[i]);
    }
    n=n+1;
                
                
    printf("\nEnter the position where you have to delete the element : ");
    scanf("%d",&del_position);
    
    for(i=del_position;i<=n;i++)
    {
        a1[i]=a1[i+1];
    }
    
    printf(" Array a1 after deletion of an element :");
    for(i=1;i<n;i++)
    {
        printf("%d ",a1[i]);
    }
    n=n-1;
    return 0;
}
//4. Find the sum of rows and columns of matrix of given order (row x 
//column).

#include<stdio.h>
int main()
{
    int matrix[50][50],i,j,row,column,r_sum[50],c_sum[50];
    printf("\nEnter the size of the row of the matrix(max 5): ");
    scanf("%d",&row);  
    printf("Enter the size of the column of the matrix(max 5): ");
    scanf("%d",&column);

    if((row<1)&&(column<1))
    {
        printf("The size of the row and the column of the matrix cannot be negative!");
    }
    else if(row<1)
    {
        printf("The size of the row of a matrix cannot be negative!\n");
    }
    else if(column<1)
    {
        printf("The size of the column of the matrix cannot be negative! ");
    }
    else
    {
        printf("Enter the elements of the matrix : \n");    
        //to input the matrix 
        for(i=0;i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                printf("Enter the element at [%d][%d] : ",i,j);
                scanf("%d",&matrix[i][j]);
            }
        }   
        
        printf("The input matrix is:\n\t");
        for(i=0;i<row;i++)
        {
            for (j=0;j<column;j++)
            {
                printf("%d ",matrix[i][j]);
            }
            printf("\n\t");
        }
    
        
        for(i=0;i<row;i++)
        {
            r_sum[i]=0;
            for(j=0;j<column;j++)
            {
            r_sum[i]+=matrix[i][j];
            }
        }
    
        
        for(j=0;j<column;j++)
        {
            c_sum[j]=0;
            for(i=0;i<row;i++)
            {
                c_sum[j]+=matrix[i][j];
            }
        }

        
        for(i=0;i<row;i++)
        {
            printf("\nSum of row %d is %d",i+1,r_sum[i]);
        }
    
        
        for(j=0;j<column;j++)
        {
            printf("\nSum of column %d is %d",j+1,c_sum[j]);   
        }
    }
    return 0;
}



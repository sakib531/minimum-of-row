#include<stdio.h>

int main()
{
    int row , column ;

    printf("Enter row length please : ");
    scanf("%d" , &row);

    printf("\nEnter column length please : ");
    scanf("%d" , &column);

    int arr[row][column] , k , r  ;
    for(k = 0 ; k < row ; k++)
    {
        for(r = 0 ; r < column ; r++)
        {
            printf("Enter elements of row %d column %d\n" , k+1 , r+1);
            scanf("%d" , &arr[k][r]);

        }
    }

    system ("cls") ;

    printf("\nThe given Matrix is : \n\n");
    for(k = 0 ; k < row ; k++)
    {
        for(r = 0 ; r < column ; r++)
        {
            printf("\t%d   " , arr[k][r]);
        }
        printf("\n");
    }

    for(k = 0 ; k < row ; k++)
    {
       int min = arr[k][0] ;
       for(r = 1 ; r < column ; r++)
       {
            if(arr[k][r] < min)
            {
                min = arr[k][r] ;
            }
      }
      printf("\nMinimum element of Row %d  is : %d\n", k + 1, min);
    }
   return 0 ;
}

#include <stdio.h>
#include <stdlib.h>



void Hollow_Rectangular_print(int rows , int col);


int main()
{
    int rows ;
    int col ;
     printf(" please enter  The Number Of Rows    : ");
    scanf("%i" , &rows);
    printf(" please enter  The Number Of Columns : ");
    scanf("%i" , &col);

    Hollow_Rectangular_print(rows , col);





    return 0;
}

void Hollow_Rectangular_print(int rows , int col)
{
    int k;
    int m;

     for(k=1 ; k<=rows; k++)
    {
        for(m=1 ; m<=col; m++)
        {
            if (m==1 || m==col ||k==1 || k==rows )
            {
                printf("*");

            }
            else
            {
                printf(" ");

            }

        }
        printf("\n");

     }
}

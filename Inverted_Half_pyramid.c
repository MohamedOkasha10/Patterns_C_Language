#include <stdio.h>
#include <stdlib.h>
/*

*****
****
***
**
*

*/



int k;
int m;
int n;


int main()
{

    printf("please enter half pyramid base size :\n");
    scanf("%i", &n);

    for(k=1 ; k<=n ; k++)
    {
        for(m=n ; m<=k ;m--)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}

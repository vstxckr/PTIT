#include<stdio.h>
#include<string.h>
#include<stdbool.h>



int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for ( int i=1 ; i<=a ; i++ )
    {
        if (i<=b)
        {
            int dem=0;
            for ( int j=i ; j<= b ; j++ )
            {
                printf("%c",64+j);
                dem++;
            }
            for ( int j=i-1 ; dem!=b ; j-- )
            {
                printf("%c",64+j);
                dem++;
            }
            printf("\n");
        }
        else
        {
            for ( int j=b ; j>=1 ; j-- )
            {
                printf("%c",64+j);
            }
            printf("\n");
        }
    }
}
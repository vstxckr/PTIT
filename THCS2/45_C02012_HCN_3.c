#include<stdio.h>
#include<string.h>
#include<stdbool.h>



int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    for ( int i=1 ; i<= a ; i++ )
    {
        if ( i<=b )
        {
            for ( int j=i ; j>1 ; j--)
            {
                printf("%d",j);
            }
            for ( int j=1 ; j<=b-i+1 ; j++ )
            {
                printf("%d",j);
            }
            printf("\n");
        }
        else
        {
            int dem=0;
            for ( int j=i ; dem!=b ; j-- )
            {
                printf("%d",j);
                dem++;
            }
            printf("\n");
        }
    }
}
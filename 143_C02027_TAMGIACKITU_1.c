#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


void solve(int n)
{
    int pivot = 1;
    for ( int i = 1 ; i <= n ; i++ )
    {
        if ( i & 1 )
        {
            for ( int j = 0 ; j < i ; j++ )
            {
                printf ("%c ",pivot+j+96);
            }
        }
        else
        {
            for ( int j = pivot+i-1 ; j >= pivot ; j-- )
            {
                printf("%c ",j+96);
            }
        }
        pivot += i;
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n); 
    solve(n);
}

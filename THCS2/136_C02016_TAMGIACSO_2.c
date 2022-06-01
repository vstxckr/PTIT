#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#define max(a,b) a > b ? a : b

void solve(int n)
{
    for ( int i = 1 ; i <= n ; i++ )
    {
        if ( !(i & 1) )
        {
            int even = 2;
            for ( int j = 1 ; j <= i ; j++ )
            {
                printf("%d",even);
                even += 2;
            }
        }
        else
        {
            int odd = 1;
            for ( int j = 1 ; j <= i ; j++ )
            {
                printf("%d",odd);
                odd += 2;
            }
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n); 
    solve(n);
}

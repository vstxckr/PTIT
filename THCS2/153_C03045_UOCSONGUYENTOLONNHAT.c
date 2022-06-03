#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


void solve(long long x)
{
    long long hold = 2;
    while ( x % 2 == 0 )
    {
        x /= 2;
    }
    for ( int i = 3 ; i <= sqrt(x) ; i+=2 )
    {
        while ( x % i == 0 )
        {
            x /= i;
            hold = i;
        }
    }
    if ( x > 1 )
    {
        printf("%lld\n", x);
    }
    else
    {
        printf("%lld\n",hold);
    }
}


int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        long long n;
        scanf("%lld",&n);
        solve(n);
    }
}
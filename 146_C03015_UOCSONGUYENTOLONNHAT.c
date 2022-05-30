#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>


void solve(long long n)
{
    long long res = 2;
    while (n % 2 == 0)
    {
        n /= 2;
    }
    for ( long long i = 3 ; i <= sqrt(n) ; i+=2 )
    {
        if ( n % i == 0)
        {
            res = i;
        }
        while ( n % i == 0 )
        {
            n /= i;
        }
    }
    if ( n > 1 )
    {
        res = n;
    }
    printf("%lld\n", res);
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
